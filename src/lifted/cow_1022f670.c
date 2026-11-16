/* f_0x1022f670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022f670(Guest* g)
{
    uint32_t eax;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd8(COW_IMG(0x1047fe8fu)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047fe8fu));
        goto L_1022f6a1;
    }
    wr32(sp0 - 0x14u, 1u);
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10221270u), t1 + 0x20u, 1, 1u);
    t3 = g->edx;
    cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    wr32(self + 0x64u, 0u);
    return;
L_1022f6a1: ;
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x1022f360u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10097de0u), 1, COW_IMG(0x1022f360u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x1022f370u));
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x10097df0u), 1, COW_IMG(0x1022f370u));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x20u, COW_IMG(0x1022f3c0u));
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10097e00u), 1, COW_IMG(0x1022f3c0u));
    t11 = g->edx;
    wr32(sp0 - 0x18u, 5u);
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->edx = t11;
    g->esp = sp0 - 0x14u;
    t12 = cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, 0u, 5u, 5u);
    t13 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    t14 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = t13;
    t15 = cow_thiscall(g, COW_IMG(0x101188e0u), t14, 1, 1u);
    t16 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = t15;
    t17 = cow_thiscall(g, COW_IMG(0x10117020u), t15, 1, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr16(sp0 - 6u, 0x3eu);
    g->edx = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10117070u), t15, 1, sp0 - 8u);
    t19 = g->edx;
    wr32(sp0 - 0x18u, 2u);
    g->edi = t15;
    t20 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 2u);
    wr16(sp0 - 6u, (uint16_t)(rd16(sp0 - 6u) + 0x20u));
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr16(sp0 - 2u, (uint16_t)(rd32(sp0 - 6u) + 0x12u));
    g->edx = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10117070u), t20, 1, sp0 - 8u);
    t22 = g->edx;
    wr32(sp0 - 0x18u, 3u);
    g->edi = 0x20u;
    t23 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 3u);
    wr16(sp0 - 6u, (uint16_t)(rd16(sp0 - 6u) + 0x40u));
    wr16(sp0 - 2u, (uint16_t)(rd32(sp0 - 6u) + 0x12u));
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x10117070u), t23, 1, sp0 - 8u);
    t25 = g->edx;
    wr32(sp0 - 0x18u, 4u);
    g->edi = 0x20u;
    t26 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 4u);
    wr16(sp0 - 6u, (uint16_t)(rd16(sp0 - 6u) + 0x20u));
    wr16(sp0 - 2u, (uint16_t)(rd32(sp0 - 6u) + 0x12u));
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10117070u), t26, 1, sp0 - 8u);
    t28 = g->edx;
    wr32(sp0 - 0x18u, 5u);
    g->edi = 0x20u;
    t29 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 5u);
    wr16(sp0 - 6u, (uint16_t)(rd16(sp0 - 6u) + 0x20u));
    wr16(sp0 - 2u, (uint16_t)(rd32(sp0 - 6u) + 0x12u));
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10117070u), t29, 1, sp0 - 8u);
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x10233910u), self, 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(self + 0x1cu, COW_IMG(0x10233540u));
    wr32(sp0 - 0x1cu, 0u);
    cow_cdecl(g, COW_IMG(0x10097fd0u), 2, 0u, 0u);
    wr32(self + 0x64u, 1u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022f670(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
