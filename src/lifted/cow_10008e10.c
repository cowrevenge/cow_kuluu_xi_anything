/* f_0x10008e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10008e10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10455c38u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
        goto L_10008e6c;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
    g->eax = eax;
    g->ecx = self + 0xca0u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, self + 0xca0u);   /* kernel32.dll!LoadLibraryA */
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x1045654cu), t1);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10008e6c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10329138u));
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, t4, 2, eax, COW_IMG(0x1034fb98u));   /* kernel32.dll!GetProcAddress */
    t6 = g->ecx;
    t7 = g->edx;
    wr32(COW_IMG(0x10456550u), t5);
    g->eax = rd32(COW_IMG(0x1045654cu));
    g->edx = t7;
    t8 = rd32(COW_IMG(0x1045654cu));
    t9 = cow_thiscall(g, t4, t6, 2, t8, COW_IMG(0x1034fb88u));
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x1045654cu));
    wr32(COW_IMG(0x10456554u), t9);
    t12 = cow_thiscall(g, t4, t11, 2, t11, COW_IMG(0x1034fb78u));
    wr32(COW_IMG(0x10456558u), t12);
    return (t12 & 0xffffff00u) | 1u;
L_10008e6c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10008e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10008e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
