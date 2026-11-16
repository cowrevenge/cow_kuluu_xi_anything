/* f_0x1014b490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014b490(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10161290u), rd32(COW_IMG(0x10578428u)), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_1014b51a;
    }
    edx = t3;
    ebx = t2;
    edi = t1;
    g->ecx = rd32(COW_IMG(0x10578428u));
    t4 = rd32(COW_IMG(0x10578428u));
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x101612d0u), 1, edi);
    t6 = g->ecx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_1014b51a;
    }
    eax = t5;
    ecx = t6;
    esi = t5;
    if ((rd8(esi) & 0x3fu) >= rd8(ebx + 3u))
    {
        eax = (eax & 0xffff0000u) | rd8(ebx + 3u);
        goto L_1014b51a;
    }
    ecx = rd8(esi) & 0x3fu;
    wr8(sp0 + 4u, (uint8_t)(uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u));
    if ((uint8_t)(uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u) == 0u)
    {
        eax = (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u);
        goto L_1014b51a;
    }
    eax = (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu)) >> 5u);
    edx = (uint32_t)((int32_t)edi >> 0x1fu) & 0x1fu;
    if ((uint8_t)eax >= 0x20u) goto L_1014b51a;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        goto L_1014b51a;
    }
    ecx = t7;
    edx = t8;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x1014a260u), 1, esi);
    t10 = g->ecx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        goto L_1014b51a;
    }
    ecx = t10;
    return ((((uint8_t)rd32(sp0 + 4u) + 1u & 0xffff0000u) | rd16(esi) >> 6u) & 0xffffff00u) | rd16(ecx + (uint8_t)rd32(sp0 + 4u) * 6u + 6u) >= rd16(esi) >> 6u;
L_1014b51a: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014b490(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
