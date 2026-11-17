/* f_0x10307060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10307060(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(sp0 + 4u) << 5u;
    g->eax = rd32(in_edi + 4u);
    g->edx = in_edx;
    t2 = rd32(in_edi + 4u);
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, rd32(t2), t1, 0);
    t4 = g->edx;
    wr32(t3 + 4u, 0x1fu);
    wr32(t3 + 0x14u, 0x1fu);
    wr32(t3, 0u);
    wr32(t3 + 8u, 0u);
    wr32(t3 + 0xcu, 0x3fu);
    wr32(t3 + 0x10u, 0u);
    g->esi = t3;
    g->ecx = 0u;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x10306a9du), in_edi, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 4u);
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10306dd5u), t6, 6, in_edi, t3, 1u, t8, in_edi, 1u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t9 <= 0)
    {
        ecx = t10;
        edx = t11;
        ebx = t9;
    }
    else
    {
        ecx = t10;
        edx = t11;
        ebx = t9;
        esi = t3;
        loc_8 = esi;
L_103070b4: ;
        t12 = rd32(sp0 + 4u);
        g->esi = in_edi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10306f28u), loc_8, g->ecx, g->edx, 1, 3, t12, in_esi, in_ebx);
        t13 = g->edx;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        if ((int32_t)rd32(sp0 + 4u) < (int32_t)ebx)
        {
            ecx = t12;
            edx = t13;
            loc_8 = loc_8 + 0x20u;
            goto L_103070b4;
        }
        ecx = t12;
        edx = t13;
    }
    t14 = rd32(in_edi);
    wr32(in_edi + 0x70u, ebx);
    wr32(t14 + 0x14u, 0x5fu);
    wr32(rd32(in_edi) + 0x18u, ebx);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(in_edi) + 4u), ecx, 0);
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10307060(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
