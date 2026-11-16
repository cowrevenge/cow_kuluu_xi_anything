/* f_0x100e5980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e5980(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e5a77;
    }
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100e57c0u), 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_100e5a77;
    }
    t2 = rd32(COW_IMG(0x104dfd98u));
    wr32(t2 + 0x19dd0u, arg1);
    t3 = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
    g->edx = t3;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10312090u), t2, g->ecx, g->edx, 1, 3, t3, arg2, 0x80u);
    t4 = g->edx;
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr8(t5 + 0x19dcfu, 0u);
    t6 = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
    g->ecx = t6;
    g->edx = t4;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100e32d0u), 2, arg1, t6);
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe0u, 0u, 0u);
    if (t9 == 0u)
    {
        eax = t9;
        goto L_100e5a77;
    }
    eax = t9;
    ebx = t9;
    t10 = rd32(COW_IMG(0x104dfd98u));
    esi = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
    edi = ebx + 4u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebx + 0x94u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x100e3220u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(ebx + 0x84u, t11);
    wr32(ebx + 0x88u, 0u);
    g->ecx = t12;
    g->edx = t13;
    t14 = cow_call_regs(g, COW_IMG(0x10312090u), ebx + 0x88u, g->ecx, g->edx, 1, 3, ebx + 0x88u, COW_IMG(0x10361e0cu), 4u);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x1cu;
    t17 = cow_call_regs(g, COW_IMG(0x100e32c0u), t14, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr8(ebx + 0x8bu, (uint8_t)t17);
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_stdcall(g, COW_IMG(0x100da530u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(ebx + 0x8cu, t20);
    g->ecx = t21;
    g->edx = t22;
    t23 = cow_stdcall(g, COW_IMG(0x100da550u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(ebx + 0x90u, t23);
    t26 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebx, 0x98u, 0u);
    return (t26 & 0xffffff00u) | 1u;
L_100e5a77: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
