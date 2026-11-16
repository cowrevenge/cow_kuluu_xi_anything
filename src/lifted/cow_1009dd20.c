/* f_0x1009dd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009dd20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 0x10u) != 0u)
    {
        eax = in_eax;
        edx = (in_edx & 0xffff0000u) | rd16(arg3 + 0x10u);
        goto L_1009dd65;
    }
    edx = (in_edx & 0xffff0000u) | rd16(arg3 + 0x10u);
    if (rd16(arg3 + 0x12u) != (uint16_t)edx)
    {
        eax = in_eax;
        goto L_1009dd65;
    }
    if (rd32(arg3 + 4u) != 0u)
    {
        eax = rd32(arg3 + 4u);
        goto L_1009dd65;
    }
    if (rd32(arg3 + 8u) != 0u)
    {
        eax = rd32(arg3 + 8u);
        goto L_1009dd65;
    }
    t1 = rd32(arg3 + 0xcu);
    g->eax = rd32(rd32(COW_IMG(0x1065cb04u)));
    g->edx = t1;
    t2 = rd32(rd32(COW_IMG(0x1065cb04u)));
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, rd32(t2 + 0x18u), rd32(COW_IMG(0x1065cb04u)), 3, t1, 0u, 0u);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_1009dd65: ;
    g->edx = (uint16_t)edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, (uint16_t)edx);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_1009dd80;
    }
    eax = t5;
    edx = t6;
    g->edx = edx;
    return eax;
L_1009dd80: ;
    t7 = rd16(arg3 + 0x12u);
    g->ecx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t8 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1009dd9b;
    }
    eax = t8;
    edx = t10;
    g->edx = edx;
    return eax;
L_1009dd9b: ;
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
    {
        edx = rd32(COW_IMG(0x10480af0u) + edx * 4u);
        goto L_1009ddb0;
    }
    edx = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ddb0: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_1009ddc5;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ddc5: ;
    t11 = rd32(edx + 0x74u);
    t12 = rd32(eax + 0x74u);
    if (rd32(edx + 0x78u) == rd32(arg3 + 4u))
    {
        edi = rd32(eax + 0x78u);
        goto L_1009ddea;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ddea: ;
    if (edi == rd32(arg3 + 8u)) goto L_1009ddf9;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ddf9: ;
    t13 = rd32(edx + 0x120u);
    if (t13 >> 9u & 1u)
    {
        ebp = t13;
        goto L_1009de13;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de13: ;
    t14 = rd32(eax + 0x120u);
    if (t14 >> 9u & 1u)
    {
        edi = t14;
        goto L_1009de2d;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de2d: ;
    if (((rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u))) >> 8u & 8u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
        goto L_1009de54;
    }
    ecx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
    ebx = rd32(COW_IMG(0x1047fb40u));
    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_1009de54;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de54: ;
    if ((ecx & 0x20u) == 0u) goto L_1009de81;
    if (!(ebp >> 7u & 1u)) goto L_1009de6d;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de6d: ;
    if (!(edi >> 7u & 1u)) goto L_1009de81;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de81: ;
    if (!(rd32(edx + 0x124u) >> 0x1eu & 1u)) goto L_1009de99;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009de99: ;
    if (!(rd32(eax + 0x124u) >> 0x1eu & 1u)) goto L_1009deb1;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009deb1: ;
    t15 = rd32(eax + 0xa0u);
    t16 = rd32(edx + 0xa0u);
    t17 = rd32(arg3 + 0xcu);
    g->eax = t17;
    g->edx = t16;
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1065cb04u))) + 0x18u), rd32(COW_IMG(0x1065cb04u)), 3, t17, t16, t15);
    t19 = g->edx;
    g->edx = t19;
    return (t18 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009dd20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009dd20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
