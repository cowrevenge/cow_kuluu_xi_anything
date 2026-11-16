/* f_0x1014a460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014a460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    t1 = rd32(sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x10161290u), rd32(COW_IMG(0x10578428u)), in_edx, 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1014a4ea;
    }
    edx = t3;
    ebx = t2;
    edi = t1;
    g->ecx = rd32(COW_IMG(0x10578428u));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10578428u));
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x101612d0u), 1, edi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t7;
        goto L_1014a4ea;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = t5;
    if ((rd8(esi) & 0x3fu) >= rd8(ebx + 3u))
    {
        eax = (eax & 0xffff0000u) | rd8(ebx + 3u);
        goto L_1014a4ea;
    }
    ecx = rd8(esi) & 0x3fu;
    wr8(sp0 + 4u, (uint8_t)(uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u));
    if ((uint8_t)(uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u) == 0u)
    {
        eax = (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u);
        edx = (uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu;
        goto L_1014a4ea;
    }
    eax = (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u);
    edx = (uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu;
    if ((uint8_t)eax >= 0x20u) goto L_1014a4ea;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_1014a4ea;
    }
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x1014a260u), 1, esi);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t12;
        goto L_1014a4ea;
    }
    ecx = t11;
    g->edx = (uint8_t)rd32(sp0 + 4u) * 3u + 3u;
    return ((((uint8_t)rd32(sp0 + 4u) + 1u & 0xffff0000u) | rd16(esi) >> 6u) & 0xffffff00u) | rd16(ecx + (uint8_t)rd32(sp0 + 4u) * 6u + 6u) >= rd16(esi) >> 6u;
L_1014a4ea: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a460(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
