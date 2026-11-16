/* f_0x101ad840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ad840(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    if ((int32_t)t1 < (int32_t)((eax & 0xffffff00u) | rd8(self + 0x110u)))
    {
        ecx = t1;
        edx = in_edx;
        edi = t1;
        goto L_101ad87f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x110u);
    ecx = t1;
    edi = t1;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad24u), eax, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_101ad87f;
    }
    return 2u;
L_101ad87f: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x111u)) goto L_101ad8a9;
    eax = rd8(self + 0x111u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037adb0u), eax, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_101ad8a9;
    }
    return 2u;
L_101ad8a9: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x114u)) goto L_101ad8d3;
    eax = rd8(self + 0x114u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad2cu), eax, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_101ad8d3;
    }
    return 4u;
L_101ad8d3: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x115u)) goto L_101ad8fd;
    eax = rd8(self + 0x115u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037adacu), eax, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_101ad8fd;
    }
    return 4u;
L_101ad8fd: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x116u)) goto L_101ad927;
    eax = rd8(self + 0x116u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ada4u), eax, in_edi, in_esi);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_101ad927;
    }
    return 5u;
L_101ad927: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x117u)) goto L_101ad951;
    eax = rd8(self + 0x117u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ada0u), eax, in_edi, in_esi);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        ecx = t18;
        edx = t19;
        goto L_101ad951;
    }
    return 5u;
L_101ad951: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x112u)) goto L_101ad97b;
    eax = rd8(self + 0x112u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad98u), eax, in_edi, in_esi);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        goto L_101ad97b;
    }
    return 3u;
L_101ad97b: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x113u)) goto L_101ad9a5;
    eax = rd8(self + 0x113u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad90u), eax, in_edi, in_esi);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        ecx = t24;
        edx = t25;
        goto L_101ad9a5;
    }
    return 3u;
L_101ad9a5: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x118u)) goto L_101ad9cf;
    eax = rd8(self + 0x118u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t26 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad84u), eax, in_edi, in_esi);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_101ad9cf;
    }
    return 6u;
L_101ad9cf: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x119u)) goto L_101ad9f9;
    eax = rd8(self + 0x119u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t29 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad80u), eax, in_edi, in_esi);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_101ad9f9;
    }
    return 6u;
L_101ad9f9: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11au)) goto L_101ada23;
    eax = rd8(self + 0x11au);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad70u), eax, in_edi, in_esi);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0u)
    {
        ecx = t33;
        edx = t34;
        goto L_101ada23;
    }
    return 0xcu;
L_101ada23: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11bu)) goto L_101ada4d;
    eax = rd8(self + 0x11bu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t35 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad68u), eax, in_edi, in_esi);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        ecx = t36;
        edx = t37;
        goto L_101ada4d;
    }
    return 0xcu;
L_101ada4d: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11cu)) goto L_101ada77;
    eax = rd8(self + 0x11cu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t38 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad60u), eax, in_edi, in_esi);
    t39 = g->ecx;
    t40 = g->edx;
    if (t38 != 0u)
    {
        ecx = t39;
        edx = t40;
        goto L_101ada77;
    }
    return 0xbu;
L_101ada77: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11du)) goto L_101adaa1;
    eax = rd8(self + 0x11du);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t41 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad5cu), eax, in_edi, in_esi);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 != 0u)
    {
        ecx = t42;
        edx = t43;
        goto L_101adaa1;
    }
    return 0xbu;
L_101adaa1: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11eu)) goto L_101adacb;
    eax = rd8(self + 0x11eu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t44 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad50u), eax, in_edi, in_esi);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 != 0u)
    {
        ecx = t45;
        edx = t46;
        goto L_101adacb;
    }
    return 0xeu;
L_101adacb: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x11fu)) goto L_101adaf5;
    eax = rd8(self + 0x11fu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad48u), eax, in_edi, in_esi);
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 != 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_101adaf5;
    }
    return 0xeu;
L_101adaf5: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x120u)) goto L_101adb1f;
    eax = rd8(self + 0x120u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t50 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad3cu), eax, in_edi, in_esi);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 != 0u)
    {
        ecx = t51;
        edx = t52;
        goto L_101adb1f;
    }
    return 0xfu;
L_101adb1f: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x121u)) goto L_101adb49;
    eax = rd8(self + 0x121u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t53 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ad34u), eax, in_edi, in_esi);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 != 0u)
    {
        ecx = t54;
        edx = t55;
        goto L_101adb49;
    }
    return 0xfu;
L_101adb49: ;
    if ((int32_t)edi < (int32_t)rd8(self + 0x122u)) goto L_101adb73;
    eax = rd8(self + 0x122u);
    g->esp = sp0 - 4u;
    t56 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1034ffb8u), eax, in_edi, in_esi);
    if (t56 != 0u) goto L_101adb73;
    return 1u;
L_101adb73: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ad840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
