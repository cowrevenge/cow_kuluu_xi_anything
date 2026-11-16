/* f_0x1011dee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1011dee0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg2;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329144u)), self, 6, 0x3a4u, 0u, arg1, arg2, arg3, arg4);
    t2 = g->ecx;
    if ((int32_t)t1 <= (int32_t)arg4)
    {
        eax = t1;
        ecx = t2;
        ebp = t1;
    }
    else
    {
        eax = t1;
        ecx = t2;
        ebp = arg4;
    }
    if (arg3 != 0u)
    {
        wr16(arg3 + ebp * 2u, 0u);
        if ((int32_t)ebp <= 0) goto L_1011df50;
        edx = 0u;
        esi = 0u;
L_1011df1f: ;
        if (rd8(arg1 + edx) == 0u) goto L_1011df50;
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
        if ((uint8_t)ecx != 0x85u) goto L_1011df57;
        t3 = rd8(arg1 + edx + 1u);
        t4 = rd16(COW_IMG(0x10333050u) + rd8(arg1 + edx + 1u) * 2u);
        wr16(arg3 + esi * 2u, (uint16_t)t4);
        if ((uint16_t)t4 != 0u)
        {
            ecx = (t3 & 0xffff0000u) | t4;
        }
        else
        {
            ecx = (t3 & 0xffff0000u) | t4;
            wr16(arg3 + esi * 2u, 0x2318u);
        }
L_1011df48: ;
        edx = edx + 2u;
L_1011df4b: ;
        if ((int32_t)(esi + 1u) < (int32_t)ebp)
        {
            esi = esi + 1u;
            goto L_1011df1f;
        }
    }
L_1011df50: ;
    return ebp;
L_1011df57: ;
    if ((uint8_t)ecx != 0xefu) goto L_1011df78;
    if (rd8(arg1 + edx + 1u) < 0x1fu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx + 1u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx + 1u);
        if ((uint8_t)ecx < 0x2fu)
        {
            wr16(arg3 + esi * 2u, (uint8_t)ecx | 0xef00u);
            eax = (eax & 0xffff0000u) | (uint8_t)ecx | 0xef00u;
        }
    }
    goto L_1011df48;
L_1011df78: ;
    if ((uint8_t)ecx > 0x7fu) goto L_1011df48;
    edx = edx + 1u;
    goto L_1011df4b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011dee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011dee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
