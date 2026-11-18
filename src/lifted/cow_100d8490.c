/* f_0x100d8490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d8490(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);

    COW_AT(100d8490)
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x9e8u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x103291d4u));
    wr32(t1 + 4u, 0xffffffffu);
    wr32(t1 + 0x18u, 0u);
    wr32(t1 + 0x1cu, 0u);
    wr16(t1 + 0x28u, 0x10u);
    wr8(t1 + 0x2au, 0x80u);
    wr8(t1 + 0x2bu, 0x10u);
    wr16(t1 + 0x2cu, 0u);
    wr16(t1 + 0x2eu, 0u);
    wr32(t1 + 0x20u, 0x10u);
    wr32(t1 + 0x24u, 0x46465849u);
    g->eax = 0x10u;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, t4, t2, 3, 0u, 1u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(t1 + 0x468u, t5);
    g->edx = t7;
    t8 = cow_thiscall(g, t4, t6, 3, 0u, 0u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(t1 + 0x46cu, t8);
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_stdcall(g, rd32(COW_IMG(0x103291d0u)), 4, 0u, 0u, 1u, 0u);   /* kernel32.dll!CreateSemaphoreA */
    t12 = g->ecx;
    t13 = g->edx;
    wr32(t1 + 0x470u, t11);
    cow_call_regs(g, COW_IMG(0x1031500du), g->eax, t12, t13, 1, 3, COW_IMG(0x100d8520u), 0u, t1);
    wr32(t1, 0u);
    wr32(arg1, t1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
