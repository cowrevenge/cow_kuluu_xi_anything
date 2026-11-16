/* f_0x101e9710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9710(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(COW_IMG(0x10663648u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663648u));
        edx = in_edx;
        goto L_101e979e;
    }
    eax = rd32(COW_IMG(0x10663648u));
    wr32(sp0 - 0x28u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101e979e;
    }
    edx = t2;
    edi = t1;
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    t3 = rd32(self + 8u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->esp = sp0 - 0x24u;
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t3, g->edx, 0, 1, sp0 - 0x18u);
    t5 = rd32(edi + 0x8cu);
    wr32(sp0 - 0x28u, t5);
    wr32(sp0 - 0x2cu, COW_IMG(0x10351cbcu));
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->ebx = self;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10351cbcu), t5, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0x80808080u);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    t6 = rd32(sp0 - 0x16u) + 0x16u;
    wr32(sp0 - 0x48u, t6);
    t7 = rd32(sp0 - 0x18u) + 0x5fu;
    wr32(sp0 - 0x4cu, t7);
    g->eax = sp0 - 0x10u;
    g->edx = t7;
    g->esp = sp0 - 0x30u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t6, 7, t7, t6, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t9 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = t9;
    return t8;
L_101e979e: ;
    wr32(sp0 - 0x28u, COW_IMG(0x10381e94u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381e94u));
    t11 = g->edx;
    g->ebx = in_ebx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
