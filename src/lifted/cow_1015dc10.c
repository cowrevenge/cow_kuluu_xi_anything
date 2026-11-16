/* f_0x1015dc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015dc10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        loc_4 = t1;
        goto L_1015dc57;
    }
    edx = t2;
    loc_4 = t1;
L_1015dc27: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(t3 + 4u) == 0u)
    {
        edx = t5;
        goto L_1015dc4f;
    }
    eax = rd32(t3 + 4u);
    ecx = t4;
    edx = t5;
    esi = t3;
    wr32(sp0 - 0x14u, 0x10u);
    wr32(sp0 - 0x18u, eax + 0x46u);
    wr32(sp0 - 0x1cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, eax + 0x46u, 0x10u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t7 = g->edx;
    if (t6 == 0u) goto L_1015dc60;
    edx = t7;
L_1015dc4f: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1015dc27;
L_1015dc57: ;
    return 0u;
L_1015dc60: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015dc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015dc10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
