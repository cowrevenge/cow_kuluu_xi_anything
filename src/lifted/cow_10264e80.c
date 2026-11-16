/* f_0x10264e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10264e80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(COW_IMG(0x10329188u));
    wr32(arg2, 0u);
    ecx = self;
    edx = in_edx;
    ebx = t1;
L_10264e98: ;
    if (arg1 == 0xcu)
    {
        ebp = 0u;
    }
    else
    {
        ebp = arg1 + 4u;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, ebp);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(arg1 + 0x44u) == 0u)
    {
        eax = rd32(arg1 + 0x44u);
        ecx = t2;
        edx = t3;
        goto L_10264ee9;
    }
    eax = rd32(arg1 + 0x44u);
    ecx = t2;
    edx = t3;
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        edi = rd32(arg1 + 0x1cu);
        wr32(arg1 + 0x28u, rd32(arg1 + 0x28u) + 1u);
    }
    else
    {
        edi = rd32(arg1 + 0x1cu);
        t4 = rd32(edi + 0x1cu);
        t5 = rd32(arg1 + 0x20u);
        wr32(arg1 + 0x1cu, t4);
        wr32(arg1 + 0x20u, t5 - 1u);
        eax = t5 - 1u;
        ecx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, ebx, ecx, 1, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    if (edi != 0u)
    {
        edx = t8;
        goto L_10264ef8;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if ((arg5 & 4u) != 0u) goto L_10264f0e;
    t9 = rd32(arg1 + 0x24u);
    g->ecx = ecx;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t9, 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    goto L_10264e98;
L_10264ee9: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, ebx, ecx, 1, ebp);
    t12 = g->edx;
    g->edx = t12;
    return 0x80040211u;
L_10264ef8: ;
    wr32(edi + 0x44u, 1u);
    wr32(arg2, edi);
    g->edx = edx;
    return 0u;
L_10264f0e: ;
    g->edx = edx;
    return 0x8004022eu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264e80(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
