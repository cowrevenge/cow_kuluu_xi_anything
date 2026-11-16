/* f_0x10150e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10150e60(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 + 8u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101cb960u), 3, arg1, arg2, sp0 + 8u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10150e94;
    }
    eax = t1;
    edx = t2;
    if ((arg2 & 2u) == 0u) goto L_10150e94;
    g->edx = edx;
    return 0x80404040u;
L_10150e94: ;
    wr32(sp0 - 0x14u, sp0 + 8u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x101cba20u), 3, arg1, arg2, sp0 + 8u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_10150eba;
    }
    edx = t4;
    if ((arg2 & 2u) == 0u) goto L_10150eba;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_10150eba: ;
    wr32(sp0 - 0x14u, 0u);
    t5 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x18u, t5);
    g->esp = sp0 - 0x10u;
    t6 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t5, 2, t5, 0u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_10150edb;
    }
    edx = t7;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_10150edb: ;
    if ((rd32(rd32(arg2 + 0x14bcu)) >> 8u & 0x40u) == 0u) goto L_10150ef4;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_10150ef4: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, 0u);
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 4u, 4, 0u, sp0 + 4u, sp0 - 4u, 1u);
    t9 = g->ecx;
    if ((uint8_t)t8 == 0u)
    {
        ecx = t9;
        goto L_10150f3a;
    }
    eax = t8;
    ecx = t9;
    if ((uint8_t)arg1 != rd8(arg1 + 2u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_10150f3a;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    g->eax = eax;
    g->edx = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, rd32(t10 + 0x54u), self, 0);
    t12 = g->edx;
    if ((uint8_t)rd32(sp0 - 4u) != t11)
    {
        ecx = (uint8_t)rd32(sp0 - 4u);
        goto L_10150f3a;
    }
    edx = t12;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_10150f3a: ;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 + 4u, sp0 - 4u, 2u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t15;
        goto L_10150f80;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    if ((uint8_t)arg1 != rd8(arg1 + 2u)) goto L_10150f80;
    eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    g->eax = eax;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, rd32(t16 + 0x54u), self, 0);
    t18 = g->edx;
    if ((uint8_t)rd32(sp0 - 4u) != t17)
    {
        edx = t18;
        goto L_10150f80;
    }
    edx = t18;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_10150f80: ;
    t19 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x14u, t19);
    g->esp = sp0 - 0x10u;
    t20 = cow_fastcall(g, COW_IMG(0x10151c30u), rd32(COW_IMG(0x10578484u)), t19, 1, t19);
    t21 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = t21;
    return (-(t20 != 0u) & 0xffffbfa0u) - 0x7f7f7f80u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150e60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
