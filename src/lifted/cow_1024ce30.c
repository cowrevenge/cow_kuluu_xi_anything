/* f_0x1024ce30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1024ce30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1024ce9f;
    }
    eax = t1;
    if (rd8(eax + 4u) != rd32(COW_IMG(0x10669138u)))
    {
        ecx = rd32(COW_IMG(0x10669138u));
        edx = rd8(eax + 4u);
        goto L_1024ce58;
    }
    ecx = rd32(COW_IMG(0x10669138u));
    esi = rd32(COW_IMG(0x1066913cu));
    if (rd8(eax + 7u) == esi)
    {
        edx = rd8(eax + 7u);
        goto L_1024ce9f;
    }
    edx = rd8(eax + 7u);
L_1024ce58: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, ecx);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x24u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, COW_IMG(0x10669110u), t6);
    t9 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1024cee0u), 0u, COW_IMG(0x10669110u), 0u, 0u, 1u, 0u);
    return;
L_1024ce9f: ;
    t10 = rd32(COW_IMG(0x106693fcu));
    wr32(COW_IMG(0x10669130u), 4u);
    if (t10 != 0u)
    {
        ecx = t10;
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x102518b0u), ecx, edx, 1, 0u);
    }
    if (rd32(rd32(COW_IMG(0x105783ecu)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
        wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
    }
    wr8(COW_IMG(0x106218e6u), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ce30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024ce30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
