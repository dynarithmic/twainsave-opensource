/*
This file is part of the Dynarithmic TWAIN Library (DTWAIN).
Copyright (c) 2002-2020 Dynarithmic Software.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

FOR ANY PART OF THE COVERED WORK IN WHICH THE COPYRIGHT IS OWNED BY
DYNARITHMIC SOFTWARE. DYNARITHMIC SOFTWARE DISCLAIMS THE WARRANTY OF NON INFRINGEMENT
OF THIRD PARTY RIGHTS.
*/
// mimics the TW_FRAME type
struct twain_frame
{
    double left = 0;
    double top = 0;
    double right = 0;
    double bottom = 0;

    twain_frame(double singlevalue) : left(singlevalue), top(singlevalue), right(singlevalue),
                                        bottom(singlevalue)
    {
    }

    twain_frame(double l, double t, double r, double b) : left(l), top(t), right(r), bottom(b)
    {
    }

    twain_frame()
    {
    }
};