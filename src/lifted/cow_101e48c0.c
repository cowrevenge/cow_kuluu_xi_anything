/* f_0x101e48c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101e48c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x68u) == 0u) goto L_101e48dd;
    eax = rd32(self + 0x68u);
    if (eax == 1u) goto L_101e48d0;
    eax = eax - 1u;
    return (eax & 0xffffff00u) | 1u;
L_101e4770: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101e34d0u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x101e3370u), t3, COW_IMG(0x10663510u), g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        esi = t3;
        goto L_101e478a;
    }
    eax = t5;
    edx = t7;
    g->edx = edx;
    return eax;
L_101e478a: ;
    if (esi != 0u) goto L_101e4794;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101e4794: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x101e46e0u), ecx, 1, esi);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        goto L_101e4830;
    }
    edx = t9;
    t10 = rd8(esi + 1u);
    g->ecx = t10;
    g->edx = edx;
    t11 = rd8(esi);
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, t10, t11);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        goto L_101e47c2;
    }
    eax = t12;
    edx = t14;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101e47c2: ;
    t15 = (eax & 0xffffff00u) | rd8(esi + 1u);
    t16 = (ecx & 0xffffff00u) | rd8(esi);
    g->ecx = t16;
    g->edx = rd32(eax);
    t17 = rd32(eax);
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x101e3a20u), 3, t16, t15, t17);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_101e47de;
    }
    eax = t18;
    edx = t20;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101e47de: ;
    if (rd8(esi + 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 2u);
        goto L_101e4816;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        edx = t22;
        goto L_101e48ac;
    }
    edx = t22;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3a8u), 1u, 0u);
    t24 = g->edx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_101e4816: ;
    if (rd32(COW_IMG(0x10663540u)) == 0u) goto L_101e48ac;
    ecx = rd32(COW_IMG(0x10663540u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_call_regs(g, COW_IMG(0x101e65a0u), eax, ecx, g->edx, 0, 1, eax);
    t26 = g->edx;
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_101e4830: ;
    if (rd8(esi + 2u) == 1u) goto L_101e488d;
    eax = rd8(esi + 2u) - 1u;
    if (eax == 1u) goto L_101e4869;
    eax = eax - 1u;
    if (eax == 1u) goto L_101e4844;
    eax = eax - 1u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101e4844: ;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f36cu), 1u, 0u);
    t28 = rd32(COW_IMG(0x1066353cu));
    wr16(t28 + 0x16u, 0u);
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_101e4869: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f380u), 1u, 0u);
    t29 = g->edx;
    t30 = rd32(COW_IMG(0x10663538u));
    wr16(t30 + 0x16u, 0u);
    g->edx = t29;
    return (t30 & 0xffffff00u) | 1u;
L_101e488d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f394u), 1u, 0u);
    t32 = g->edx;
    wr16(rd32(COW_IMG(0x10663534u)) + 0x16u, 0u);
    eax = t31;
    edx = t32;
L_101e48ac: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e48d0: ;
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101e4690u), t1, self, in_edx);
L_101e48dd: ;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    edx = t2;
    goto L_101e4770;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e48c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e48c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
