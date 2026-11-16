/* f_0x100bbd80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bbd80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 0x60u) goto L_100bbf02;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100bbf08u) + rd8(COW_IMG(0x100bbf1cu) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x100bbdb8u: ecx = rd8(COW_IMG(0x100bbf1cu) + eax); goto L_100bbdb8;
    case 0x100bbdfeu: ecx = rd8(COW_IMG(0x100bbf1cu) + eax); goto L_100bbdfe;
    case 0x100bbe5au: ecx = rd8(COW_IMG(0x100bbf1cu) + eax); goto L_100bbe5a;
    case 0x100bbec0u: ecx = rd8(COW_IMG(0x100bbf1cu) + eax); goto L_100bbec0;
    case 0x100bbf02u: goto L_100bbf02;
    default: rt_fatal(g, COW_IMG(0x100bbdb1u), "switch");
    }
    return;
L_100bbdb8: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x100f97c0u), 1, 0u);
    t27 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        edx = t27;
        ebx = 0u;
        goto L_100bbef0;
    }
    eax = t26;
    edx = t27;
    edi = t26;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t29 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        edx = t29;
        goto L_100bbeee;
    }
    eax = t28;
    ecx = t28;
    edx = t29;
    if (ecx == 1u)
    {
        ebx = rd32(edi + 4u);
    }
    else
    {
        ecx = ecx - 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t30 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
        ebx = 0u;
    }
L_100bbef0: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 6u, ebx);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
L_100bbf02: ;
    return;
L_100bbdfe: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x100f97f0u), 1, 0u);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t18;
        ebx = 0u;
        goto L_100bbeaa;
    }
    eax = t17;
    edx = t18;
    edi = t17;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)t19 >= 8)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_100bbe52;
    }
    eax = t19;
    g->eax = eax;
    g->edx = eax * 3u;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t23 = g->edx;
    if (t22 == 0u)
    {
        edx = t23;
        edi = eax * 0xcu + edi;
        eax = t22;
        goto L_100bbe4e;
    }
    ecx = t22;
    edx = t23;
    edi = eax * 0xcu + edi;
    eax = t22;
    if (ecx == 1u) goto L_100bbe49;
    ecx = ecx - 1u;
    if (ecx == 1u) goto L_100bbe44;
    ecx = ecx - 1u;
L_100bbea2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    ebx = 0u;
L_100bbeaa: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 8u, ebx);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    return;
L_100bbe44: ;
    ebx = rd32(edi + 8u);
    goto L_100bbeaa;
L_100bbe49: ;
    ebx = rd32(edi + 4u);
    goto L_100bbeaa;
L_100bbe4e: ;
    ebx = rd32(edi);
    goto L_100bbeaa;
L_100bbe52: ;
    goto L_100bbea2;
L_100bbe5a: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x100f9820u), 1, 0u);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        ebx = 0u;
        goto L_100bbeaa;
    }
    eax = t10;
    edx = t11;
    edi = t10;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 >= 32)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100bbe9c;
    }
    eax = t12;
    edx = t14;
    g->eax = eax * 3u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t16 = g->edx;
    if (t15 == 0u)
    {
        edx = t16;
        edi = eax * 0xcu + edi;
        eax = t15;
        goto L_100bbe4e;
    }
    ecx = t15;
    edx = t16;
    edi = eax * 0xcu + edi;
    eax = t15;
    if (ecx == 1u) goto L_100bbe49;
    ecx = ecx - 1u;
    if (ecx == 1u) goto L_100bbe44;
    ecx = ecx - 1u;
    goto L_100bbea2;
L_100bbe9c: ;
    goto L_100bbea2;
L_100bbec0: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x100f9850u), 1, 0u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        ebx = 0u;
        goto L_100bbef0;
    }
    eax = t3;
    edx = t4;
    edi = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t7;
        goto L_100bbeee;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    ebx = 0u;
    goto L_100bbef0;
L_100bbeee: ;
    ebx = rd32(edi);
    goto L_100bbef0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bbd80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bbd80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
