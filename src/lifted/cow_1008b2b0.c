/* f_0x1008b2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1008b2b0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    eax = arg1;
    ecx = self;
    edx = in_edx;
    edi = arg2;
L_1008b2c2: ;
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_1008b2e6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1008b2e2;
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_1008b2e6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_1008b2c2;
    }
L_1008b2e2: ;
    eax = 0u;
L_1008b2eb: ;
    if (eax != 0u) goto L_1008b2f8;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1008b2e6: ;
    eax = -cf + 1u - cf;
    goto L_1008b2eb;
L_1008b2f8: ;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_1008b377;
    }
    esi = arg1;
    edi = sp0 - 0x1cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg2;
    edi = sp0 - 0x38u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x10077c30u), sp0 - 0x1cu, g->ecx, g->edx, 1, 7, sp0 - 0x1cu, in_edi, in_esi, in_ebp, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t2 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x38u);
    g->ecx = sp0 - 0x38u;
    g->edx = t2;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10077c30u), t1, g->ecx, g->edx, 1, 7, sp0 - 0x38u, sp0 - 0x1cu, in_edi, in_esi, in_ebp, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t3 = g->ecx;
    t4 = g->edx;
    eax = sp0 - 0x1cu;
    ecx = t3;
    edx = t4;
    esi = sp0 - 0x38u;
L_1008b341: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1008b365;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1008b361;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1008b365;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1008b341;
    }
L_1008b361: ;
    eax = 0u;
L_1008b36a: ;
    if (eax != 0u) goto L_1008b377;
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1008b365: ;
    eax = -cf + 1u - cf;
    goto L_1008b36a;
L_1008b377: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
