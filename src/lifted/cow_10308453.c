/* f_0x10308453 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10308453(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x58u);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x1a4u, t2);
    wr32(t2 + 0x44u, 0u);
    wr32(t2 + 0x34u, 0u);
    wr32(t2, COW_IMG(0x10308374u));
    wr32(t2 + 8u, COW_IMG(0x1030843eu));
    wr32(t2 + 0xcu, COW_IMG(0x1030843fu));
    if ((int32_t)rd32(arg1 + 0x64u) <= 4)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
        wr32(rd32(arg1) + 0x14u, 0x36u);
        t5 = rd32(arg1);
        wr32(t5 + 0x18u, 4u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), t5, 1, arg1);
        t6 = g->edx;
        ecx = arg1;
        edx = t6;
    }
    if ((int32_t)rd32(arg1 + 0x54u) <= 256)
    {
        eax = 0x100u;
    }
    else
    {
        wr32(rd32(arg1) + 0x14u, 0x38u);
        t7 = rd32(arg1);
        wr32(t7 + 0x18u, 0x100u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t8 = rd32(arg1);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall_cdecl(g, rd32(t8), t7, 1, arg1);
        t10 = g->edx;
        eax = t9;
        ecx = arg1;
        edx = t10;
    }
    g->esi = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x10307b3cu), 0);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = cow_call_regs(g, COW_IMG(0x10307c69u), g->eax, g->ecx, t13, 1, 1, arg1);
    t15 = g->edx;
    if (rd32(arg1 + 0x4cu) != 2u)
    {
        edx = t15;
    }
    else
    {
        eax = t14;
        edx = t15;
        g->esi = arg1;
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1030833eu), arg1, edx, 0);
        t16 = g->edx;
        edx = t16;
    }
    g->esi = in_esi;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308453(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10308453(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
