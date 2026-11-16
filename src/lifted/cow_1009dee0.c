/* f_0x1009dee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009dee0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg3 + 0x10u);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        goto L_1009df06;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    return eax;
L_1009df06: ;
    t5 = rd16(arg3 + 0x12u);
    g->ecx = ecx;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1009df21;
    }
    eax = t6;
    edx = t8;
    g->edx = edx;
    return eax;
L_1009df21: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_1009df36;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009df36: ;
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
        goto L_1009df4b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009df4b: ;
    t9 = rd32(ecx + 0x74u);
    t10 = rd32(eax + 0x74u);
    if (rd32(ecx + 0x78u) == rd32(arg3 + 4u))
    {
        edx = rd32(ecx + 0x78u);
        esi = rd32(eax + 0x78u);
        goto L_1009df70;
    }
    edx = rd32(ecx + 0x78u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009df70: ;
    if (esi == rd32(arg3 + 8u)) goto L_1009df7f;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009df7f: ;
    t11 = rd32(ecx + 0x120u);
    if (t11 >> 9u & 1u)
    {
        edi = t11;
        goto L_1009df99;
    }
    edx = t11 >> 9u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009df99: ;
    t12 = rd32(eax + 0x120u);
    if (t12 >> 9u & 1u)
    {
        esi = t12;
        goto L_1009dfb3;
    }
    edx = t12 >> 9u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009dfb3: ;
    if (((rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u))) >> 8u & 8u) == 0u)
    {
        edx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
        goto L_1009dfda;
    }
    edx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
    ebx = rd32(COW_IMG(0x1047fb40u));
    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_1009dfda;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009dfda: ;
    if ((edx & 0x20u) == 0u) goto L_1009e007;
    if (!(edi >> 7u & 1u)) goto L_1009dff3;
    edx = edi >> 7u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009dff3: ;
    if (!(esi >> 7u & 1u)) goto L_1009e007;
    edx = esi >> 7u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e007: ;
    if (!(rd32(ecx + 0x124u) >> 0x1du & 1u)) goto L_1009e01f;
    edx = rd32(ecx + 0x124u) >> 0x1du;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e01f: ;
    if (!(rd32(eax + 0x124u) >> 0x1du & 1u))
    {
        edx = rd32(eax + 0x124u) >> 0x1du;
        goto L_1009e037;
    }
    edx = rd32(eax + 0x124u) >> 0x1du;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e037: ;
    if (rd32(arg3 + 0xcu) != 0x31766f68u)
    {
        esi = rd32(ecx + 0xa0u);
        edi = rd32(eax + 0xa0u);
        goto L_1009e06e;
    }
    esi = rd32(ecx + 0xa0u);
    edi = rd32(eax + 0xa0u);
    eax = rd32(arg3 + 0xcu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x92u);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 0x14u;
    t16 = cow_call_regs(g, COW_IMG(0x100adee0u), t13, g->ecx, g->edx, 1, 5, esi, edi, t13, 0x92u, in_edi);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        edx = t17;
        goto L_1009e06e;
    }
    eax = t16;
    edx = t17;
    g->edx = edx;
    return eax;
L_1009e06e: ;
    t18 = rd32(arg3 + 0xcu);
    g->eax = rd32(esi);
    g->edx = edx;
    t19 = rd32(esi);
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, rd32(t19 + 0x298u), esi, 3, t18, edi, 0u);
    t21 = g->edx;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009dee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009dee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
