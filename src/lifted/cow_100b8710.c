/* f_0x100b8710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b8710(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 8u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t4 = g->edx;
    wr32(sp0 - 0x18u, 3u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t3 == 0xffu)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebp = t5;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebp = t5;
        edi = t3;
        wr8(COW_IMG(0x104886dau), 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_stdcall(g, COW_IMG(0x1018c4f0u), 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->edx = t9;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t8, 1, sp0 - 4u);
        t11 = g->edx;
        wr32(sp0 - 0x18u, rd32(t10));
        g->eax = rd32(t10);
        g->edx = t11;
        t12 = rd32(t10);
        t13 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, t12);
        t14 = g->edx;
        wr32(sp0 - 0x18u, edi);
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x1018bf50u), sp0 - 8u, 1, edi);
        t16 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        g->edx = t16;
        t17 = cow_thiscall(g, COW_IMG(0x1018bf00u), sp0 - 8u, 1, 0u);
        t18 = g->edx;
        t19 = rd32(sp0 - 8u);
        wr32(sp0 - 0x18u, t19);
        g->ecx = t19;
        g->edx = t18;
        t20 = cow_cdecl(g, COW_IMG(0x1018c1e0u), 1, t19);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    if (ebp != 0xffu)
    {
        wr32(sp0 - 0x18u, ebp);
        wr8(COW_IMG(0x104886dbu), 1u);
        g->esi = self;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, COW_IMG(0x100940b0u), ecx, 1, ebp);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b8710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b8710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
