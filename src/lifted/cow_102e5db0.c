/* f_0x102e5db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e5db0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x102e2047u), self, in_edx, 3, arg1, 0u, 1u);
    wr32(self, COW_IMG(0x10346150u));
    if (rd32(arg1 + 0x18u) == 1u)
    {
        wr32(self + 0x1078u, 0u);
    }
    else
    {
        eax = rd32(arg1 + 0x18u) - 1u;
        if (eax == 1u)
        {
            wr32(self + 0x1078u, 1u);
        }
        else
        {
            wr32(self + 0x1078u, 3u);
        }
    }
    if (rd32(arg1 + 0x1cu) == 1u)
    {
        wr32(self + 0x107cu, 0u);
    }
    else
    {
        edi = rd32(arg1 + 0x1cu) - 1u;
        if (edi == 1u)
        {
            wr32(self + 0x107cu, 1u);
        }
        else
        {
            wr32(self + 0x107cu, 3u);
        }
    }
    if (rd32(self + 0x1078u) != 3u) goto L_102e5e29;
    if (rd32(self + 0x107cu) != 3u) goto L_102e5e29;
    eax = 0u;
L_102e5e2b: ;
    wr32(self + 0x1074u, eax);
    if (rd32(self + 4u) == 0x31545844u)
    {
        wr32(self + 0x1080u, 8u);
        wr32(self + 0x1088u, COW_IMG(0x102f379cu));
        wr32(self + 0x1084u, COW_IMG(0x102f349fu));
    }
    else
    {
        eax = rd32(self + 4u);
        if (eax == 0x32545844u)
        {
            wr32(self + 0x1080u, 0x10u);
            wr32(self + 0x1088u, COW_IMG(0x102f3d60u));
            wr32(self + 0x1084u, COW_IMG(0x102f3d1au));
        }
        else
        {
            if (eax == 0x33545844u)
            {
                wr32(self + 0x1080u, 0x10u);
                wr32(self + 0x1088u, COW_IMG(0x102f37b4u));
                wr32(self + 0x1084u, COW_IMG(0x102f35ddu));
            }
            else
            {
                if (eax == 0x34545844u)
                {
                    wr32(self + 0x1080u, 0x10u);
                    wr32(self + 0x1088u, COW_IMG(0x102f3d94u));
                    wr32(self + 0x1084u, COW_IMG(0x102f3d3du));
                }
                else
                {
                    if (eax == 0x35545844u)
                    {
                        wr32(self + 0x1080u, 0x10u);
                        wr32(self + 0x1088u, COW_IMG(0x102f38c8u));
                        wr32(self + 0x1084u, COW_IMG(0x102f3660u));
                    }
                }
            }
        }
    }
    t1 = rd32(self + 0x1040u);
    t2 = rd32(self + 0x103cu);
    t3 = rd32(self + 0x1034u);
    t4 = rd32(self + 0x1030u);
    wr32(self + 0x10b0u, 0xffffffffu);
    wr32(self + 0x10b4u, 0xffffffffu);
    wr32(self + 0x109cu, t1);
    t5 = rd32(self + 0x1038u) + 3u & 0xfffffffcu;
    wr32(self + 0x1094u, t5);
    t6 = t2 + 3u & 0xfffffffcu;
    t7 = rd32(self + 0x1044u);
    wr32(self + 0x1098u, t6);
    t8 = (t5 - (t4 & 0xfffffffcu)) >> 2u;
    wr32(self + 0x10a4u, t8);
    wr32(self + 0x10a0u, t7);
    t9 = rd32(self + 0x1040u);
    wr32(self + 0x108cu, t4 & 0xfffffffcu);
    wr32(self + 0x10b8u, 0u);
    wr32(self + 0x10bcu, 0u);
    wr32(self + 0x10c0u, 0u);
    wr32(self + 0x1090u, t3 & 0xfffffffcu);
    t10 = (t6 - (t3 & 0xfffffffcu)) >> 2u;
    wr32(self + 0x10a8u, t10);
    wr32(self + 0x10acu, t7 - t9);
    g->edx = t7 - t9;
    return self;
L_102e5e29: ;
    eax = 1u;
    goto L_102e5e2b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5db0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
