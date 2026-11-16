/* f_0x101daa10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101daa10(Guest* g)
{
    double d11;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = rd32(COW_IMG(0x10663428u)) + 0x7ecu;
        edx = rd32(COW_IMG(0x10663428u));
        goto L_101dab81;
    }
    eax = rd32(COW_IMG(0x10663428u)) + 0x7ecu;
    edx = rd32(COW_IMG(0x10663428u));
    t1 = rd32(COW_IMG(0x101dabb4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101daa36u: goto L_101daa36;
    case 0x101daa67u: goto L_101daa67;
    case 0x101daa8bu: goto L_101daa8b;
    case 0x101daaafu: goto L_101daaaf;
    case 0x101daad3u: goto L_101daad3;
    case 0x101dab1du: goto L_101dab1d;
    default: rt_fatal(g, COW_IMG(0x101daa2fu), "switch");
    }
    return 0;
L_101daa36: ;
    t26 = rd16(edx + 0x8c8u);
    g->eax = t26;
    g->esp = sp0 - 8u;
    t27 = cow_stdcall(g, COW_IMG(0x101d7660u), 1, t26);
    t28 = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    g->edx = rd32(COW_IMG(0x10663428u));
    t29 = rd32(COW_IMG(0x10663428u));
    t30 = cow_stdcall(g, COW_IMG(0x101da6a0u), 1, t28);
    t31 = g->edx;
    eax = t30;
    edx = t31;
L_101dab81: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_call_regs(g, COW_IMG(0x101d8140u), eax, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, 0u, 0u);
    t33 = g->edx;
    g->edx = t33;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee64u));
    t34 = g->edx;
    t35 = rd32(self + 8u);
    g->edx = t34;
    t36 = cow_call_regs(g, COW_IMG(0x1015e790u), t35, COW_IMG(0x10621838u), g->edx, 0, 2, t35, 1u);
    t37 = g->edx;
    g->esi = in_esi;
    g->edx = t37;
    return t36;
L_101daa67: ;
    g->esi = in_esi;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 5u, 0xffffffffu);
    t21 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101dab81;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    loc_c = 0u;
    loc_10 = 5u;
L_101dab6c: ;
    t22 = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    g->eax = t22;
    g->edx = rd32(COW_IMG(0x10663428u));
    t23 = rd32(COW_IMG(0x10663428u));
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x101d76f0u), ecx, 3, t22, loc_10, loc_c);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    goto L_101dab81;
L_101daa8b: ;
    g->esi = in_esi;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 6u, 0u);
    t19 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_101dab81;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    loc_c = 0u;
    loc_10 = 6u;
    goto L_101dab6c;
L_101daaaf: ;
    g->esi = in_esi;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 2u, 0xffffffffu);
    t17 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_101dab81;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    loc_c = 0u;
    loc_10 = 2u;
    goto L_101dab6c;
L_101daad3: ;
    if (rd8(COW_IMG(0x10485824u)) & 1u) goto L_101daae6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg1 - 1u, 0);
    t10 = g->edx;
    d11 = cow_take_float(g);
    g->esi = in_esi;
    g->edx = t10;
    fpush(g, d11);
    return t9;
L_101daae6: ;
    t12 = (uint8_t)rd32(COW_IMG(0x10485640u));
    g->esi = in_esi;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x101040e0u), 5, eax, 4u, t12, 0u, 0u);
    t14 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_101dab81;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    t15 = (uint8_t)rd32(COW_IMG(0x10485640u));
    loc_c = t15;
    loc_10 = 4u;
    goto L_101dab6c;
L_101dab1d: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u) != 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u);
        goto L_101dab41;
    }
    ecx = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u);
    edx = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    return t2;
L_101dab41: ;
    t5 = (uint32_t)(int8_t)rd8(esi + 0xefu);
    g->esi = esi;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x101040e0u), 5, eax, 3u, t5, 0u, 0u);
    t7 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101dab81;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    t8 = (uint32_t)(int8_t)rd8(esi + 0xefu);
    loc_c = t8;
    loc_10 = 3u;
    goto L_101dab6c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101daa10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101daa10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
