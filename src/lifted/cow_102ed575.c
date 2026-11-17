/* f_0x102ed575 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102ed575(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x10u) == 0xc8u)
    {
        eax = rd32(arg1 + 0x10u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x10u);
        if (eax == 0xc9u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            wr32(rd32(arg1) + 0x14u, 0x12u);
            t1 = rd32(arg1 + 0x10u);
            wr32(rd32(arg1) + 0x18u, t1);
            g->eax = rd32(arg1);
            g->edx = in_edx;
            t2 = rd32(arg1);
            g->esp = sp0 - 4u;
            t3 = cow_thiscall_cdecl(g, rd32(t2), t1, 1, arg1);
            t4 = g->edx;
            eax = t3;
            ecx = arg1;
            edx = t4;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x102ed3c4u), g->eax, ecx, edx, 1, 1, arg1);
    t6 = g->edx;
    if (t5 == 1u)
    {
        edx = t6;
        goto L_102ed5d3;
    }
    eax = t5;
    ecx = t5 - 1u;
    edx = t6;
    if (ecx != 1u) goto L_102ed5d6;
    ecx = ecx - 1u;
    if ((uint8_t)arg2 != 0u)
    {
        wr32(rd32(arg1) + 0x14u, 0x32u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t7 = rd32(arg1);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall_cdecl(g, rd32(t7), ecx, 1, arg1);
        t9 = g->edx;
        eax = t8;
        ecx = arg1;
        edx = t9;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f68edu), g->eax, ecx, edx, 1, 1, arg1);
    t10 = g->edx;
    g->edx = t10;
    return 2u;
L_102ed5d3: ;
    eax = 1u;
L_102ed5d6: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed575(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed575(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
