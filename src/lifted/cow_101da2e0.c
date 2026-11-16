/* f_0x101da2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101da2e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t33;
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
    const uint32_t in_ebp = g->ebp;

    wr8(COW_IMG(0x1066344eu), 0u);
    wr8(COW_IMG(0x1066344cu), 0u);
    g->ecx = self;
    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x100dfa40u), 1, 0xffffffffu);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x10663444u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663444u));
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663444u));
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x54u);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            wr32(COW_IMG(0x10663444u), 0u);
        }
        else
        {
            eax = t3;
            edx = t4;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t5 = cow_thiscall(g, COW_IMG(0x101d7310u), eax, 0);
            t6 = g->edx;
            wr32(COW_IMG(0x10663444u), t5);
            eax = t5;
            edx = t6;
        }
    }
    if (rd32(COW_IMG(0x10663448u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663448u));
        goto L_101da362;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x574u);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_101da35a;
    }
    eax = t7;
    edx = t8;
    esi = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101d7640u), esi, 0);
    t10 = g->edx;
    wr32(COW_IMG(0x10663448u), esi);
    eax = t9;
    ecx = esi;
    edx = t10;
L_101d7870: ;
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101c4b60u), t11, 2, COW_IMG(0x1037ee1cu), 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0x574u)
    {
        eax = t12;
        edx = t14;
        ebp = ecx;
        ecx = t13;
        esi = t12;
        goto L_101d78aa;
    }
    eax = t12;
    edx = t14;
    ebp = ecx;
    g->eax = eax;
    g->edx = edx;
    t15 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x101c4790u), t15, 5, COW_IMG(0x1037ee1cu), ebp, eax, 0u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    esi = t16;
L_101d7903: ;
    if ((int32_t)esi < 0) goto L_101d7927;
    if (esi != 0x574u) goto L_101d7927;
    g->edx = ebp + 8u;
    g->esp = sp0;
    t30 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, ebp + 8u, 0x528u, in_esi, in_ebp);
    t31 = g->edx;
    if (rd32(ebp) == t30)
    {
        ecx = rd32(ebp);
        edx = t31;
        goto L_101d7930;
    }
    eax = t30;
    edx = t31;
L_101d7927: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101d7640u), eax, ebp, edx);
L_101d78aa: ;
    if ((int32_t)esi < 0) goto L_101d7927;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, esi, in_ebx, in_esi);
    t20 = g->edx;
    g->edx = t20;
    t21 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x101c4790u), t21, 5, COW_IMG(0x1037ee1cu), t19, esi, 0u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 != 0x550u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        ebx = t19;
        esi = t22;
    }
    else
    {
        edx = t24;
        ebx = t19;
        t25 = rd32(ebx);
        wr32(ebp, t25);
        t26 = rd32(ebx + 8u);
        wr32(ebp + 4u, t26);
        esi = ebx + 0x10u;
        edi = ebp + 8u;
        ecx = 0x150u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = t25;
        esi = 0x574u;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t27 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    goto L_101d7903;
L_101d7930: ;
    g->edx = edx;
    g->esp = sp0;
    t32 = cow_call_regs(g, COW_IMG(0x101c8c50u), ebp + 0x530u, g->ecx, g->edx, 1, 4, ebp + 0x530u, 0x42u, in_esi, in_ebp);
    t33 = g->edx;
    if (rd32(ebp + 4u) == t32)
    {
        eax = t32;
        edx = t33;
        goto L_101d7951;
    }
    eax = t32;
    edx = t33;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101d7640u), eax, ebp, edx);
L_101d7951: ;
    g->edx = edx;
    return eax;
L_101da35a: ;
    wr32(COW_IMG(0x10663448u), 0u);
    ecx = 0u;
L_101da362: ;
    goto L_101d7870;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101da2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101da2e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
