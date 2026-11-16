/* f_0x101b4360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_101b4360(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x40u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        if (rd8(self + 0xf0ecu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
            goto L_101b43d0;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        if (arg2 != 0u) goto L_101b43d2;
        t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        g->edx = t1;
        t2 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0xcu;
        t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
        t4 = g->ecx;
        t5 = g->edx;
        g->ecx = t4;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t3);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 != 0u)
        {
            edx = t8;
            edi = t3;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            edi = t3;
            if (rd8(self + 0xf121u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xf121u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t9 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 1u);
                t10 = g->edx;
                if (rd8(self + 0xf2f4u) != 0u)
                {
                    edx = t10;
                }
                else
                {
                    edx = t10;
                    wr8(self + 0xf121u, (uint8_t)arg2);
                }
            }
        }
        t11 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        eax = rd32(COW_IMG(0x103d3c64u));
        ecx = t11;
        loc_10 = edi;
        loc_14 = t11;
L_101b4414: ;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, loc_14, loc_10);
    }
L_101b4419: ;
    g->edx = arg4;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x101b5850u), arg3, self, g->edx, 0, 8, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_101b43d0: ;
L_101b43d2: ;
    if (arg2 == 0u || (int32_t)arg2 < 0) goto L_101b4419;
    if ((int32_t)arg2 > 2) goto L_101b4419;
    g->edx = rd32(self);
    t12 = rd32(self);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t12 + 0x5cu), self, 0);
    t13 = g->edx;
    t14 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t14;
    g->edx = t13;
    t15 = rd32(COW_IMG(0x103d3c64u));
    t16 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t14);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t16);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        ecx = t20;
        edi = t16;
    }
    else
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        edi = t16;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 0u);
        t22 = g->ecx;
        wr8(self + 0xf121u, 1u);
        ecx = t22;
    }
    t23 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    eax = t23;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_10 = edi;
    loc_14 = t23;
    goto L_101b4414;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4360(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
