/* f_0x10065250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10065250(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1564u);

    wr32(sp0 - 0x608u, in_ebx);
    wr32(sp0 - 0x60cu, in_ebp);
    wr32(sp0 - 0x610u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x610u;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x614u, arg1);
    g->eax = arg1;
    t2 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, t1, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        ebx = t2;
        goto L_10065292;
    }
    eax = t2;
    edx = t4;
    g->esp = sp0 - 0x610u;
    cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    return;
L_10065292: ;
    wr32(sp0 - 0x614u, in_edi);
    wr32(sp0 - 0x618u, 0xcu);
    g->esp = sp0 - 0x60cu;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        edi = 0u;
    }
    else
    {
        eax = t5;
        edx = t6;
        wr32(eax, 0u);
        wr32(eax + 4u, 0u);
        wr32(eax + 8u, 0u);
        edi = eax;
    }
    wr32(sp0 - 0x618u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    t7 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, 0u);
    t8 = g->edx;
    wr32(sp0 - 0x618u, t7);
    t9 = cow_fastcall(g, COW_IMG(0x100644c0u), edi, t8, 1, t7);
    t10 = g->edx;
    if ((int32_t)ebx <= 1)
    {
        eax = t9;
        edx = t10;
        goto L_100652e1;
    }
    edx = t10;
    esi = 1u;
L_100652ca: ;
    wr32(sp0 - 0x618u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    t11 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    t12 = g->edx;
    wr32(sp0 - 0x618u, t11);
    t13 = cow_call_regs(g, COW_IMG(0x10064510u), t11, edi, t12, 0, 1, t11);
    t14 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        edx = t14;
        esi = esi + 1u;
        goto L_100652ca;
    }
    eax = t13;
    edx = t14;
L_100652e1: ;
    wr32(sp0 - 0x618u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x614u;
    t15 = cow_fastcall(g, COW_IMG(0x1006baa0u), self + 0x100u, edx, 1, edi);
    t16 = g->edx;
    cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    g->ebx = rd32(sp0 - 0x608u);
    g->esi = rd32(sp0 - 0x610u);
    g->edi = rd32(sp0 - 0x614u);
    g->ebp = rd32(sp0 - 0x60cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10065250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
