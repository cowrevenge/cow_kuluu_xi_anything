/* f_0x100a0660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a0660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x5bu, 0u, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100a06d3;
    }
    eax = t1;
    ecx = t1;
    t2 = rd16(COW_IMG(0x10482f1au));
    wr16(ecx + 0xcu, (uint16_t)t2);
    t3 = rd32(COW_IMG(0x10480aa4u));
    wr32(ecx + 4u, t3);
    wr16(ecx + 0x10u, rd16(COW_IMG(0x10485f7cu)));
    g->ecx = ecx;
    g->edx = t3;
    t4 = rd16(COW_IMG(0x10485f7cu));
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x100a0580u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(t6 + 0x12u, (uint16_t)t5);
    wr16(t6 + 0xeu, 0u);
    if (rd8(COW_IMG(0x10487034u)) == 0u)
    {
        ecx = t6;
        edx = t7;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t8 = cow_stdcall(g, COW_IMG(0x100a0570u), 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(t9 + 8u, t8);
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | rd8(COW_IMG(0x10487034u));
        ecx = t6;
        edx = t7;
        wr32(ecx + 8u, 0x40000000u);
    }
    g->eax = eax;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ecx, 0x14u, 0u);
    wr16(COW_IMG(0x1047fb3au), 0xffffu);
    return (t11 & 0xffffff00u) | 1u;
L_100a06d3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
