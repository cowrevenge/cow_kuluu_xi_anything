/* f_0x10323391 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10323391(Guest* g)
{
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    esi = 0u;
    edi = 0x1au;
L_1032339c: ;
    t1 = (uint32_t)((int32_t)(edi + esi - (uint32_t)((int32_t)(edi + esi) >> 0x1fu)) >> 1u);
    if (arg1 == rd32(COW_IMG(0x103d3000u) + t1 * 0x2cu))
    {
        eax = t1;
        edx = (uint32_t)((int32_t)(edi + esi) >> 0x1fu);
        goto L_103233df;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x103d3000u) + t1 * 0x2cu);
    edx = (uint32_t)((int32_t)(edi + esi) >> 0x1fu);
    if (arg1 >= ecx)
    {
        esi = eax + 1u;
    }
    else
    {
        edi = eax - 1u;
    }
    if ((int32_t)esi <= (int32_t)edi) goto L_1032339c;
L_103233c8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x103290f0u)), ecx, 4, arg1, arg2, arg3, arg4);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_103233d8: ;
    g->edx = edx;
    return eax;
L_103233df: ;
    if (arg2 == 1u) goto L_10323440;
    if (arg2 == 3u) goto L_10323436;
    if (arg2 - 3u == 4u) goto L_1032342c;
    if (arg2 - 7u == 4u) goto L_10323422;
    if (arg2 - 0xbu == 0xff6u) goto L_10323417;
    if (arg2 == 0x1002u) goto L_1032340c;
    if (arg2 != 0x1004u)
    {
        ecx = arg2 - 0x1004u;
        goto L_103233c8;
    }
    eax = COW_IMG(0x103d3024u) + eax * 0x2cu;
    ecx = arg2 - 0x1004u;
L_10323448: ;
    if (eax == 0u) goto L_103233c8;
    if ((int32_t)arg4 < 1) goto L_103233c8;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg3, eax, arg4 - 1u);
    t2 = g->edx;
    wr8(arg4 + arg3 - 1u, 0u);
    eax = 1u;
    edx = t2;
    goto L_103233d8;
L_1032340c: ;
    eax = rd32(COW_IMG(0x103d3014u) + eax * 0x2cu);
    ecx = arg2 - 0x1002u;
    goto L_10323448;
L_10323417: ;
    eax = rd32(COW_IMG(0x103d300cu) + eax * 0x2cu);
    ecx = arg2 - 0x1001u;
    goto L_10323448;
L_10323422: ;
    eax = COW_IMG(0x103d301cu) + eax * 0x2cu;
    ecx = arg2 - 0xbu;
    goto L_10323448;
L_1032342c: ;
    eax = COW_IMG(0x103d3018u) + eax * 0x2cu;
    ecx = arg2 - 7u;
    goto L_10323448;
L_10323436: ;
    eax = COW_IMG(0x103d3010u) + eax * 0x2cu;
    ecx = arg2 - 3u;
    goto L_10323448;
L_10323440: ;
    eax = COW_IMG(0x103d3004u) + eax * 0x2cu;
    ecx = arg2 - 1u;
    goto L_10323448;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323391(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323391(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
