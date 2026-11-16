/* f_0x100a1770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a1770(Guest* g)
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 5u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_100a1794;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_100a1786: ;
    if (rd32(eax + 0x14u) == arg1) goto L_100a17c2;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100a1786;
    }
    edx = t6;
L_100a1794: ;
    ecx = 0u;
L_100a1796: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_100a17af;
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    t7 = rd32(eax + 0x74u);
    if (rd32(eax + 0x78u) == arg1)
    {
        edx = rd32(eax + 0x78u);
        goto L_100a17ca;
    }
    edx = rd32(eax + 0x78u);
L_100a17af: ;
    if ((int32_t)(ecx + 1u) < 2304)
    {
        ecx = ecx + 1u;
        goto L_100a1796;
    }
    g->edx = edx;
    return COW_IMG(0x103d3c84u);
L_100a17c2: ;
    g->edx = edx;
    return eax + 2u;
L_100a17ca: ;
    if (rd16(rd32(COW_IMG(0x10480af0u) + ecx * 4u) + 0x210u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u) + 0x214u;
        goto L_100a17e9;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    g->edx = edx;
    return ecx + 0x7cu;
L_100a17e9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
