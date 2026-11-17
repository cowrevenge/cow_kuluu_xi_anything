/* f_0x1026a6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026a6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    esi = arg2;
    edi = arg1;
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(arg2 + 0x40u) == 0u)
    {
        eax = rd32(arg2 + 0x40u);
        edx = in_edx;
        goto L_1026a6f1;
    }
    eax = rd32(arg2 + 0x40u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103294acu)), 1, eax);   /* ole32.dll!CoTaskMemAlloc */
    t2 = g->edx;
    wr32(arg1 + 0x44u, t1);
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1026a6db;
    }
    eax = t1;
    wr32(arg1 + 0x40u, eax);
    return 0x8007000eu;
L_1026a6db: ;
    t3 = rd32(arg1 + 0x40u);
    t4 = rd32(arg2 + 0x44u);
    esi = t4;
    edi = eax;
    ecx = t3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = t3;
L_1026a6f1: ;
    if (rd32(arg1 + 0x3cu) != 0u)
    {
        ebx = rd32(arg1 + 0x3cu);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(ebx) + 4u), rd32(ebx), 1, ebx);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a6a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
