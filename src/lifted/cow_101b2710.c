/* f_0x101b2710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b2710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self + 0xef22u, 0u);
    if (arg1 != 8u)
    {
        if (arg1 != 5u) goto L_101b276c;
        if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
        {
            eax = rd32(COW_IMG(0x10456a28u));
            goto L_101b2771;
        }
        eax = rd32(COW_IMG(0x10456a28u));
        t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        g->edx = t1;
        t2 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 8u;
        t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
        t4 = g->ecx;
        t5 = g->edx;
        g->ecx = t4;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, t3, 0x17u, 0u, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        cow_stdcall(g, COW_IMG(0x102bc858u), 4, t3, 0x16u, 0u, 0u);
        t9 = g->edx;
        t10 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        eax = rd32(COW_IMG(0x103d3c64u));
        ecx = t10;
        edx = t9;
        loc_c = t3;
        loc_10 = t10;
L_101b27bd: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, loc_10, loc_c);
        t23 = g->edx;
        t24 = rd32(self + 0xf128u) + 1u;
        wr32(self + 0xf128u, t24);
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        wr8(self + 0xf123u, 1u);
    }
L_101b27e9: ;
    return;
L_101b276c: ;
    if (arg1 == 9u) goto L_101b27e9;
    eax = in_eax;
L_101b2771: ;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t11 != 1u) goto L_101b27e9;
    if (arg1 != 3u) goto L_101b27e9;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_101b27e9;
    edx = rd32(COW_IMG(0x10456a28u));
    t12 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t12;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 8u;
    t14 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t12);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, t14, 0x17u, 0u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    cow_stdcall(g, COW_IMG(0x102bc858u), 4, t14, 0x16u, 0u, 0u);
    t20 = g->ecx;
    t21 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    eax = t21;
    ecx = t20;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_c = t14;
    loc_10 = t21;
    goto L_101b27bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b2710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b2710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
