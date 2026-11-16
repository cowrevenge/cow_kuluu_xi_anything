/* f_0x1024d1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1024d1a0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        eax = rd32(sp0 + 4u);
        ecx = rd32(sp0 + 8u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = rd32(eax + 8u);
    }
    if (ecx != rd32(eax + 8u))
    {
        edx = rd32(eax + 8u);
        goto L_1024d1e4;
    }
    if (eax + 0xa8u == 0u)
    {
        edx = eax + 0xa8u;
        goto L_1024d1e4;
    }
    edx = eax + 0xa8u;
    if ((rd8(edx) & 4u) == 0u) goto L_1024d1e4;
    if (arg3 == rd32(eax + 0xcu)) goto L_1024d1f9;
    t1 = (rd32(eax) & 0xffffff00u) | (uint8_t)(rd32(eax) | 0x80u);
    wr32(eax, t1);
    g->eax = eax;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x1024d5e0u), 3, eax, arg3, in_ebx);
    return t2;
L_1024d1e4: ;
    t3 = rd32(eax);
    wr32(sp0 + 8u, ecx);
    wr32(sp0 + 4u, eax);
    t4 = (t3 & 0xffffff00u) | (t3 & 0x7fu);
    wr32(eax, t4);
    if (rd32(rd32(sp0 + 4u) + 4u) != 1u)
    {
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x1024d7b0u), 3, esi, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x102506e0u), eax, g->ecx, edx, 1, 3, esi, 0u, in_edi);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x1024d420u), 1, esi);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    t14 = cow_cdecl(g, COW_IMG(0x1024d2e0u), 3, esi, 1u, esi);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(sp0 + 8u);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t18 = cow_cdecl(g, COW_IMG(0x1024d490u), 2, esi, t17);
    t19 = g->ecx;
    t20 = g->edx;
    if ((rd8(esi) & 0x20u) == 0u)
    {
        ecx = t19;
        edx = t20;
        edi = t17;
        t21 = rd8(COW_IMG(0x10389578u) + edi);
        eax = t21;
    }
    else
    {
        eax = (t18 & 0xffffff00u) | rd8(esi);
        ecx = t19;
        edx = t20;
        edi = t17;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_stdcall(g, COW_IMG(0x10037960u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1024d4c0u), 3, esi, edi, in_edi);
    t25 = g->ecx;
    t26 = g->edx;
    t27 = rd8(esi);
    wr32(esi + 8u, edi);
    wr32(esi + 0xcu, arg3);
    wr32(esi + 4u, 1u);
    if ((t27 & 0x20u) != 0u)
    {
        eax = rd32(COW_IMG(0x10389538u) + edi * 4u);
        edx = t26;
    }
    else
    {
        eax = rd32(COW_IMG(0x10389538u) + edi * 4u);
        edx = t26;
        eax = eax + 2u;
    }
    g->eax = eax;
    g->ecx = esi + 0xa8u;
    g->edx = edx;
    g->esp = sp0;
    t28 = cow_cdecl(g, COW_IMG(0x10252630u), 5, esi + 0xa8u, eax, in_edi, in_esi, in_ebx);
    t29 = g->ecx;
    t30 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1024d560u), 3, esi, edi, arg3);
    t31 = arg3 * 2u + rd32(COW_IMG(0x10389538u) + edi * 4u) + 4u;
    cow_cdecl(g, COW_IMG(0x10252630u), 5, esi + 0xccu, t31, esi, edi, arg3);
    t32 = rd32(esi);
    wr32(esi + 0x4cu, 0x47c35000u);
    t33 = (t32 & 0xffff00ffu) | (t32 >> 8u & 0xf9u) << 8u;
    wr32(esi, t33);
    wr32(esi + 0x78u, 0u);
    wr32(esi + 0x7cu, 0u);
    wr32(esi + 0x80u, 0u);
    wr32(esi + 0x84u, 0u);
    return 0u;
L_1024d1f9: ;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024d1a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
