/* f_0x102ed12a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ed12a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 4u, 0u);
    if (arg2 != 0x3du)
    {
        wr32(rd32(arg1) + 0x14u, 0xau);
        t1 = rd32(arg1);
        wr32(t1 + 0x18u, 0x3du);
        t2 = rd32(arg1);
        wr32(t2 + 0x1cu, arg2);
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), t2, 1, arg1);
    }
    if (arg3 != 0x1a8u)
    {
        wr32(rd32(arg1) + 0x14u, 0x13u);
        t3 = rd32(arg1);
        wr32(t3 + 0x18u, 0x1a8u);
        wr32(rd32(arg1) + 0x1cu, arg3);
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), arg3, 1, arg1);
    }
    t4 = rd32(arg1);
    edi = arg1;
    eax = 0u;
    ecx = 0x6au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1, t4);
    wr8(arg1 + 0xcu, 1u);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102f6839u), 1, arg1);
    t5 = g->edx;
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0x14u, 0u);
    edi = arg1 + 0x90u;
    eax = 0u;
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    eax = arg1 + 0xb0u;
    ecx = 4u;
    edx = t5;
L_102ed1b4: ;
    wr32(eax - 0x10u, 0u);
    wr32(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_102ed1b4;
    }
    eax = eax + 4u;
    ecx = ecx - 1u;
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x102eefa4u), g->eax, ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x102f5e83u), g->eax, t7, t8, 1, 3, arg1, arg1, in_esi);
    t10 = g->edx;
    if (rd8(COW_IMG(0x103ce448u)) != 2u)
    {
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, COW_IMG(0x102f5979u), arg1, 0);
        t12 = g->edx;
        wr8(COW_IMG(0x103ce448u), (uint8_t)t11);
        edx = t12;
    }
    wr32(arg1 + 0x10u, 0xc8u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed12a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ed12a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
