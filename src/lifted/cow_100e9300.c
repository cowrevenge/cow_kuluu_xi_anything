/* f_0x100e9300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e9300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100e931b;
    }
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x73u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_100e931e;
    }
    eax = t1;
    edx = t2;
L_100e931b: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e931e: ;
    if ((uint8_t)arg1 != 5u)
    {
        ecx = (uint8_t)arg1;
    }
    else
    {
        ecx = 0u;
    }
    t3 = rd8((uint8_t)ecx * 0x64u + rd32(COW_IMG(0x104dfd98u)) + (uint8_t)rd32(sp0 + 8u) + 0x9534u);
    wr8(eax + 0xau, (uint8_t)arg1);
    wr8(sp0 + 8u, (uint8_t)t3);
    if ((uint8_t)arg1 != 5u)
    {
        ecx = (uint8_t)arg1;
    }
    else
    {
        ecx = 0u;
    }
    t4 = rd32(sp0 + 8u);
    wr16(eax + 8u, rd16((uint8_t)ecx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + (uint8_t)t4 * 0x70u + 0x57f0u));
    if ((uint8_t)arg1 != 5u)
    {
        esi = (uint8_t)t4;
        edx = (uint8_t)arg1;
    }
    else
    {
        esi = (uint8_t)t4;
        edx = 0u;
    }
    t5 = rd32(esi * 0x70u + (uint8_t)edx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu);
    wr8(eax + 0xbu, (uint8_t)arg3);
    wr32(eax + 4u, t5);
    g->eax = eax;
    g->edx = (esi * 0x70u & 0xffffff00u) | (uint8_t)arg3;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0xcu, 0u);
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
