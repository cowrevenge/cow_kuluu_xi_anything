/* f_0x10278730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10278730(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg1 + 0xa8u) & 1u) goto L_1027876c;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3b14u), COW_IMG(0x103b3b44u));
    return;
L_1027876c: ;
    if ((int32_t)rd32(arg1 + 0x58u) <= 0)
    {
        ecx = self;
        goto L_102787bf;
    }
    edx = in_edx;
    edi = 0u;
L_1027877d: ;
    if ((rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u & 0x20u) != 0u)
    {
        ecx = rd32(edi * 4u + rd32(arg1 + 0x54u));
    }
    else
    {
        eax = rd32(arg1 + 0x54u);
        ecx = rd32(edi * 4u + rd32(arg1 + 0x54u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, edi);
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t4, COW_IMG(0x103b3b0cu), 7u, in_edi, in_esi);
        t8 = g->ecx;
        t9 = g->edx;
        if (t7 == 0u)
        {
            ecx = t8;
            edx = t9;
        }
        else
        {
            eax = t7;
            edx = t9;
            g->ecx = arg4;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10278810u), 5, arg1, edi, arg2, arg3, arg4);
            t10 = g->ecx;
            t11 = g->edx;
            ecx = t10;
            edx = t11;
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
    {
        edi = edi + 1u;
        goto L_1027877d;
    }
L_102787bf: ;
    if ((int32_t)rd32(arg1 + 0x58u) <= 0) goto L_1027880a;
    edi = 0u;
L_102787c8: ;
    if ((rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u & 0x20u) == 0u)
    {
        eax = rd32(edi * 4u + rd32(arg1 + 0x54u));
        edx = rd32(arg1 + 0x54u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t12 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, edi);
        t13 = g->ecx;
        t14 = g->edx;
        g->ecx = t13;
        g->edx = t14;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t12, COW_IMG(0x103b3b0cu), 7u, in_edi, in_esi);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 != 0u)
        {
            ecx = t16;
        }
        else
        {
            ecx = t16;
            edx = t17;
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10278810u), 5, arg1, edi, arg2, arg3, arg4);
            t18 = g->ecx;
            ecx = t18;
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
    {
        edi = edi + 1u;
        goto L_102787c8;
    }
L_1027880a: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10278730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
