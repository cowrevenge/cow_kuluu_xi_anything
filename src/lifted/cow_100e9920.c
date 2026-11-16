/* f_0x100e9920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e9920(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100e99a4;
    }
    if (arg2 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100e99a4;
    }
    t1 = cow_divu(g, arg1, 0x14u);
    t2 = cow_modu(g, arg1, 0x14u);
    t3 = cow_divu(g, arg2, 0x14u);
    t4 = cow_modu(g, arg2, 0x14u);
    if (t1 != t3)
    {
        eax = t3;
        edx = t4;
        goto L_100e99a4;
    }
    eax = t3;
    ecx = t1;
    edx = t4;
    esi = t2;
    edi = t4;
    if ((int32_t)ecx >= 7) goto L_100e99a4;
    if ((int32_t)eax >= 7) goto L_100e99a4;
    t5 = rd32(COW_IMG(0x104dfd98u));
    t6 = rd8(ecx * 0x64u + esi + rd32(COW_IMG(0x104dfd98u)) + 0x9534u);
    t7 = rd32(ecx * 0x64u + esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9548u);
    wr8(ecx * 0x64u + esi + t5 + 0x9534u, rd8(eax * 0x64u + edi + t5 + 0x9534u));
    t8 = rd32(eax * 0x64u + edi * 4u + t5 + 0x9548u);
    wr32(ecx * 0x64u + esi * 4u + t5 + 0x9548u, t8);
    wr8(eax * 0x64u + edi + t5 + 0x9534u, (uint8_t)t6);
    wr32(eax * 0x64u + edi * 4u + t5 + 0x9548u, t7);
    g->eax = eax * 0x64u + t5 + 0x9534u;
    g->edx = (t5 & 0xffffff00u) | t6;
    g->esp = sp0 - 0x10u;
    t9 = cow_stdcall(g, COW_IMG(0x100e9a70u), 0);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_100e99a4: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
