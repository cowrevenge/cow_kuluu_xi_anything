/* f_0x10222960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10222960(Guest* g)
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10667144u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        esi = t1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c068u));
        wr32(COW_IMG(0x10667144u), esi);
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0xd4u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        wr32(COW_IMG(0x10667148u), 0u);
    }
    else
    {
        eax = t6;
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, COW_IMG(0x10223e60u), eax, 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(COW_IMG(0x10667148u), t9);
        ecx = t10;
        edx = t11;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1764u, in_edi, in_esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        wr32(COW_IMG(0x10667150u), 0u);
    }
    else
    {
        eax = t12;
        edx = t14;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_thiscall(g, COW_IMG(0x10223bb0u), eax, 0);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(COW_IMG(0x10667150u), t15);
        ecx = t16;
        edx = t17;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t18 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x38u, in_edi, in_esi);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        ecx = t19;
        edx = t20;
        wr32(COW_IMG(0x10667154u), 0u);
    }
    else
    {
        eax = t18;
        edx = t20;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t21 = cow_thiscall(g, COW_IMG(0x102238e0u), eax, 0);
        t22 = g->ecx;
        t23 = g->edx;
        wr32(COW_IMG(0x10667154u), t21);
        ecx = t22;
        edx = t23;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t24 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x100u, in_edi, in_esi);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        ecx = t25;
        edx = t26;
        wr32(COW_IMG(0x1066715cu), 0u);
    }
    else
    {
        eax = t24;
        edx = t26;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t27 = cow_thiscall(g, COW_IMG(0x10226080u), eax, 0);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(COW_IMG(0x1066715cu), t27);
        ecx = t28;
        edx = t29;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t30 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x74u, in_edi, in_esi);
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        wr32(COW_IMG(0x10667164u), 0u);
    }
    else
    {
        eax = t30;
        edx = t32;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, COW_IMG(0x102254d0u), eax, 0);
        t34 = g->ecx;
        t35 = g->edx;
        wr32(COW_IMG(0x10667164u), t33);
        ecx = t34;
        edx = t35;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t36 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x80u, in_edi, in_esi);
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        ecx = t37;
        edx = t38;
        wr32(COW_IMG(0x10667160u), 0u);
    }
    else
    {
        eax = t36;
        edx = t38;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t39 = cow_thiscall(g, COW_IMG(0x10226c80u), eax, 0);
        t40 = g->ecx;
        t41 = g->edx;
        wr32(COW_IMG(0x10667160u), t39);
        ecx = t40;
        edx = t41;
    }
    g->edx = edx;
    g->esp = sp0;
    t42 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6cu, in_edi, in_esi);
    t43 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        goto L_10222a92;
    }
    eax = t42;
    edx = t43;
    g->esp = sp0 - 8u;
    t44 = cow_thiscall(g, COW_IMG(0x10226550u), eax, 0);
    wr32(COW_IMG(0x10667170u), t44);
    return t44;
L_10222a92: ;
    wr32(COW_IMG(0x10667170u), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10222960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
