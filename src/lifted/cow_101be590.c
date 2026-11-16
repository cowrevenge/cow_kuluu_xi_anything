/* f_0x101be590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101be590(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    t2 = t1 + ((uint32_t)((int32_t)t1 >> 0x1fu) & 0x3ffffu);
    if ((int32_t)(t1 & 0x8003ffffu) >= 0)
    {
        eax = t2;
        ecx = t1 & 0x8003ffffu;
        edx = (uint32_t)((int32_t)t1 >> 0x1fu) & 0x3ffffu;
        esi = (uint32_t)((int32_t)t2 >> 0x12u);
    }
    else
    {
        eax = t2;
        ecx = t1 & 0x8003ffffu;
        edx = (uint32_t)((int32_t)t1 >> 0x1fu) & 0x3ffffu;
        esi = (uint32_t)((int32_t)t2 >> 0x12u);
        ecx = (ecx - 1u | 0xfffc0000u) + 1u;
    }
    wr32(sp0 + 0xcu, ecx);
    if (esi == 0u)
    {
        edi = arg2;
        loc_4 = 0u;
        goto L_101be608;
    }
    ebx = 0u;
    edi = arg2;
    loc_4 = 0u;
L_101be5cf: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, edi, 1u, 0x40000u, arg1, in_edi, in_esi);
    t4 = g->edx;
    if ((rd8(arg1 + 0xcu) & 0x20u) != 0u)
    {
        eax = (t3 & 0xffffff00u) | rd8(arg1 + 0xcu);
        edx = t4;
        loc_4 = loc_4 + t3;
        goto L_101be62a;
    }
    eax = (t3 & 0xffffff00u) | rd8(arg1 + 0xcu);
    ecx = loc_4 + t3;
    edx = t4;
    loc_4 = loc_4 + t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
    t6 = g->ecx;
    t7 = g->edx;
    if (ebx + 1u < esi)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = ebx + 1u;
        edi = edi + 0x40000u;
        goto L_101be5cf;
    }
    eax = t5;
    edx = t7;
    edi = edi + 0x40000u;
    ecx = rd32(sp0 + 0xcu);
L_101be608: ;
    if (ecx == 0u) goto L_101be635;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, edi, 1u, ecx, arg1, in_edi, in_esi);
    t9 = g->edx;
    if ((rd8(arg1 + 0xcu) & 0x20u) == 0u)
    {
        edx = t9;
        loc_4 = loc_4 + t8;
        goto L_101be635;
    }
    eax = (t8 & 0xffffff00u) | rd8(arg1 + 0xcu);
    edx = t9;
    loc_4 = loc_4 + t8;
L_101be62a: ;
    g->edx = edx;
    return 0xffffffffu;
L_101be635: ;
    g->edx = edx;
    return loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be590(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
