/* f_0x1021e3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021e3b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, 0xffffffffu);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), arg2, 0u, 0xffffffffu);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(sp0 - 8u) == 0u) goto L_1021e422;
    ecx = t1;
    edx = t2;
    edi = rd32(sp0 - 8u);
L_1021e3dd: ;
    eax = edi + 0x30u;
    esi = arg1;
L_1021e3e2: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1021e406;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1021e402;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1021e406;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1021e3e2;
    }
L_1021e402: ;
    eax = 0u;
L_1021e40b: ;
    if (eax == 0u) goto L_1021e42c;
    wr32(sp0 - 0x30u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        ecx = t3;
        edx = t4;
        edi = rd32(sp0 - 8u);
        goto L_1021e3dd;
    }
L_1021e422: ;
    return 0u;
L_1021e406: ;
    eax = -cf + 1u - cf;
    goto L_1021e40b;
L_1021e42c: ;
    return edi + 0x30u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021e3b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
