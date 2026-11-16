/* f_0x10278a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10278a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10277a70u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_10278a7c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3ae4u), COW_IMG(0x103b3b6cu));
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10278a7c: ;
    if ((int32_t)rd32(arg1 + 0xa4u) <= 0)
    {
        eax = rd32(arg1 + 0xa4u);
    }
    else
    {
        eax = rd32(arg1 + 0xa4u);
        edi = 0u;
L_10278a92: ;
        if ((uint8_t)arg5 == 0u) goto L_10278aac;
        if ((int8_t)rd8(rd32(arg1 + 0x54u) + rd32(edi * 4u + rd32(arg1 + 0xa0u)) * 4u) < 0)
        {
            edx = rd32(arg1 + 0x54u);
            goto L_10278acd;
        }
        edx = rd32(arg1 + 0x54u);
L_10278aac: ;
        t9 = rd32(edi * 4u + rd32(arg1 + 0x9cu));
        if ((uint32_t)((int32_t)t9 >> 0x10u) == arg3)
        {
            eax = t9;
            ecx = (uint32_t)((int32_t)t9 >> 0x10u);
            g->edx = arg2;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x1028f300u), 3, arg2, eax, arg4);
            t10 = g->edx;
            edx = t10;
        }
L_10278acd: ;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0xa4u))
        {
            eax = rd32(arg1 + 0xa4u);
            edi = edi + 1u;
            goto L_10278a92;
        }
        eax = rd32(arg1 + 0xa4u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10278a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
