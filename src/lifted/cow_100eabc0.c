/* f_0x100eabc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100eabc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100eabe5;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 != 1u) goto L_100eabe5;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe4u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100eabe8;
    }
    eax = t1;
L_100eabe5: ;
    return eax & 0xffffff00u;
L_100eabe8: ;
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u, (uint16_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u) + 1u));
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9853u, rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9853u) & 0x7fu);
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        wr16(ecx + 0x9852u, 1u);
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    t3 = rd16(ecx + 0x9852u);
    t4 = rd8(eax + 4u);
    wr16(eax + 0xau, (uint16_t)t3);
    wr8(eax + 4u, (t4 & 0xfu) | 0xb0u);
    t5 = rd8(eax + 5u);
    wr8(eax + 5u, t5 & 0x3fu);
    wr8(eax + 6u, (uint8_t)arg2);
    wr8(eax + 7u, (uint8_t)arg3);
    wr8(eax + 0x10u, 0u);
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x90u, 0u);
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eabc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eabc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
