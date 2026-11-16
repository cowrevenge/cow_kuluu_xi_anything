/* f_0x10159260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10159260(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 296u);

    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10cu;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10159284;
    }
    eax = t1;
    edx = t2;
    if (rd32(eax + 0x78u) == rd32(arg1 + 4u))
    {
        ecx = rd32(arg1 + 4u);
        goto L_1015929f;
    }
    eax = rd32(eax + 0x78u);
L_10159284: ;
    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106643a8u));
        goto L_1015929f;
    }
    ecx = rd32(COW_IMG(0x106643a8u));
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 1u);
    t3 = rd32(arg1 + 4u);
    wr32(sp0 - 0x118u, t3);
    g->ecx = ecx;
    g->edx = t3;
    g->esp = sp0 - 0x10cu;
    t4 = cow_call_regs(g, COW_IMG(0x102031f0u), eax, g->ecx, g->edx, 0, 3, t3, 1u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u) goto L_101592e1;
    ecx = t5;
    edx = t6;
L_1015929f: ;
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 1u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, sp0 - 0x104u);
    wr32(sp0 - 0x120u, 0xc3u);
    wr32(sp0 - 0x124u, 7u);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0xc3u);
    t18 = g->edx;
    wr32(sp0 - 0x120u, t17);
    g->esp = sp0 - 0x10cu;
    t19 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, t17, sp0 - 0x104u, 0u, 1u, 0u);
    return t19 & 0xffffff00u;
L_101592e1: ;
    wr32(self + 0x84u, rd32(arg1));
    t7 = rd32(arg1 + 4u);
    wr32(self + 0x88u, t7);
    g->edx = t7;
    g->esp = sp0 - 0x10cu;
    t8 = cow_thiscall(g, COW_IMG(0x10159380u), self, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x110u, t8);
    wr32(sp0 - 0x114u, 0x13au);
    wr32(sp0 - 0x118u, 9u);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x110u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x13au);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x114u, t11);
    wr32(sp0 - 0x118u, COW_IMG(0x10372140u));
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->edx = t13;
    g->esp = sp0 - 0x108u;
    t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10372140u), t11, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t15 = g->edx;
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->esp = sp0 - 0x10cu;
    t16 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return (t16 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
