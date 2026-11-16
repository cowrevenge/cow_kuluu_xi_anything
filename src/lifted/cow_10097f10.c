/* f_0x10097f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10097f10(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 0)
    {
        eax = in_eax;
        goto L_10097fc4;
    }
    if ((int32_t)arg1 >= 128)
    {
        eax = in_eax;
        goto L_10097fc4;
    }
    t1 = rd32(COW_IMG(0x104800b8u) + arg1 * 4u) | arg2;
    wr32(COW_IMG(0x104800b8u) + arg1 * 4u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x101cc4f0u), arg2, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        edi = t2;
        goto L_10097f4e;
    }
    eax = t2;
    return (eax & 0xffffff00u) | 1u;
L_10097f4e: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x64u, 0u, 0u);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_10097fc4;
    }
    eax = t5;
    edx = t6;
    if ((int32_t)arg1 < 16)
    {
        ecx = 0u;
        ebx = 0u;
        goto L_10097f7d;
    }
    ecx = 0u;
    ebx = 0u;
L_10097f6a: ;
    if ((int32_t)((uint16_t)(ecx + 0x10u) + 0x10u) <= (int32_t)arg1)
    {
        ecx = ecx + 0x10u;
        ebx = ebx + 1u;
        goto L_10097f6a;
    }
    edx = (uint16_t)(ecx + 0x10u) + 0x10u;
    ecx = ecx + 0x10u;
    ebx = ebx + 1u;
L_10097f7d: ;
    wr16(eax + 0x48u, rd16(edi + 0x74u));
    t7 = rd32(edi + 0x78u);
    wr32(eax + 4u, t7);
    ecx = COW_IMG(0x104800b8u) + (uint16_t)ecx * 4u;
    edx = eax + 8u;
    esi = 0x10u;
L_10097fa0: ;
    wr32(edx, rd32(ecx));
    if (esi != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        esi = esi - 1u;
        goto L_10097fa0;
    }
    ecx = ecx + 4u;
    edx = edx + 4u;
    wr16(eax + 0x4au, (uint16_t)ebx);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x4cu, 0u);
    return (t8 & 0xffffff00u) | 1u;
L_10097fc4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
