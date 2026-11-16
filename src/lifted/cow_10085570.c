/* f_0x10085570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10085570(Guest* g)
{
    uint32_t eax;
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

    eax = in_eax;
    edx = in_edx;
L_10085575: ;
    esi = rd32(self + 0x68u);
L_10085578: ;
    if (esi == 0u) goto L_100855c2;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100855b2;
    }
    eax = t2;
    g->eax = eax;
    g->edx = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), esi, 0);
    t6 = g->edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b108u));
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_100855b2;
    }
    edx = t8;
    g->eax = rd32(esi);
    g->edx = edx;
    t9 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x100539e0u), t10, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        edi = t10;
        goto L_100855b7;
    }
    eax = t12;
    edx = t14;
L_100855b2: ;
    esi = rd32(esi + 0x2cu);
    goto L_10085578;
L_100855b7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), ecx, 3, edi, in_edi, in_esi);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    goto L_10085575;
L_100855c2: ;
    esi = rd32(self + 0x6cu);
L_100855c5: ;
    if (esi == 0u) goto L_1008560f;
    g->eax = eax;
    g->edx = rd32(esi);
    t17 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, rd32(t17 + 0x18u), esi, 0);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        goto L_100855ff;
    }
    edx = t19;
    g->eax = rd32(esi);
    g->edx = edx;
    t20 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, rd32(t20 + 0x18u), esi, 0);
    t22 = g->edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t21, t22, 1, COW_IMG(0x1032b108u));
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        goto L_100855ff;
    }
    eax = t23;
    g->eax = eax;
    g->edx = rd32(esi);
    t24 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t25 = cow_thiscall(g, rd32(t24 + 0x18u), esi, 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x100539e0u), t25, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        edi = t25;
        goto L_10085604;
    }
    eax = t27;
L_100855ff: ;
    esi = rd32(esi + 0x30u);
    goto L_100855c5;
L_10085604: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), ecx, 3, edi, in_edi, in_esi);
    eax = t30;
    goto L_100855c2;
L_1008560f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10085570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
