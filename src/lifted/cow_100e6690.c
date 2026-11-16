/* f_0x100e6690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100e6690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_100e66eb;
    if ((int8_t)rd8(rd32(COW_IMG(0x104df770u)) + 0x170u) <= 0)
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x170u);
        edx = in_edx & 0xffffff00u;
        goto L_100e66dc;
    }
    eax = rd32(COW_IMG(0x104df770u));
    edx = in_edx & 0xffffff00u;
L_100e66ac: ;
    if (rd32(eax + (uint32_t)(int8_t)edx * 4u + 0x174u) == 0u)
    {
        ecx = (uint32_t)(int8_t)edx;
    }
    else
    {
        ecx = (uint32_t)(int8_t)edx;
        t1 = (eax & 0xffff0000u) | rd16(eax + ecx * 2u + 0x148u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x100e6370u), 1, t1);
        t2 = g->ecx;
        t3 = g->edx;
        eax = rd32(COW_IMG(0x104df770u));
        ecx = t2;
        edx = t3;
    }
    if ((int8_t)((uint8_t)edx + 1u) < (int8_t)rd8(eax + 0x170u))
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
        goto L_100e66ac;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x170u);
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
L_100e66dc: ;
    wr8(eax + 0x134u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100e67c0u), eax, ecx, edx);
L_100e66eb: ;
    if (rd32(arg2) != 3u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100e675b;
    }
    if ((int8_t)rd8(rd32(COW_IMG(0x104df770u)) + 0x170u) <= 0)
    {
        eax = in_eax & 0xffffff00u;
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x170u);
        goto L_100e675b;
    }
    ecx = rd32(COW_IMG(0x104df770u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x170u);
    eax = in_eax & 0xffffff00u;
    esi = rd32(rd32(arg2 + 8u) + 0x18u);
L_100e6708: ;
    if (esi == rd32(ecx + (uint32_t)(int8_t)eax * 4u + 0x174u)) goto L_100e671e;
    if ((int8_t)((uint8_t)eax + 1u) < (int8_t)edx)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
        goto L_100e6708;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    g->edx = edx;
    return eax;
L_100e671e: ;
    wr32(ecx + (uint32_t)(int8_t)eax * 4u + 0x174u, 0u);
    t4 = rd32(arg2 + 8u);
    t5 = (eax & 0xffff0000u) | rd16((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x104df770u)) + 0x148u);
    g->eax = t5;
    g->edx = rd32(COW_IMG(0x104df770u));
    t6 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100e6760u), 4, t5, t4, in_edi, in_esi);
    t8 = g->edx;
    t9 = (t8 & 0xffff0000u) | rd16((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x104df770u)) + 0x148u);
    g->edx = t9;
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x100e6350u), 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_100e675b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e6690(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
