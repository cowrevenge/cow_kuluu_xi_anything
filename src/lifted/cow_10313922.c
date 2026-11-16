/* f_0x10313922 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10313922(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    ecx = self;
    edx = in_edx;
    esi = arg1;
L_1031392c: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd8(esi) * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x24u, 8u);
        wr32(sp0 - 0x28u, rd8(esi));
        g->edx = edx;
        t1 = rd8(esi);
        g->esp = sp0 - 0x1cu;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t1, 8u, in_esi);
        t3 = g->edx;
        eax = t2;
        ecx = 8u;
        edx = t3;
    }
    if (eax == 0u) goto L_1031395a;
    esi = esi + 1u;
    goto L_1031392c;
L_1031395a: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, esi);
    t5 = g->edx;
    wr32(sp0 - 0x2cu, t4);
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1031ed6bu), rd32(sp0 - 0x2cu), 4, sp0 - 0x1cu, esi, t4, 0u);
    fpush(g, rdf64(t6 + 0x10u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313922(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10313922(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
