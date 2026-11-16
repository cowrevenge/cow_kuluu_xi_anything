/* f_0x101f9110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101f9110(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q2;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg4 != 0u)
    {
        ebx = 0x14u;
        goto L_101f914d;
    }
    if (rd32(COW_IMG(0x106643a8u)) == 0u) goto L_101f9168;
    ecx = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 0x18u;
    t1 = cow_stdcall(g, COW_IMG(0x10203120u), 0);
    if (t1 == 0u) goto L_101f9168;
    eax = t1;
    if ((int32_t)((uint32_t)(int8_t)rd8(eax + 0x13u) + 0x13u) >= 40) goto L_101f9285;
    ebx = (uint32_t)(int8_t)rd8(eax + 0x13u) + 0x13u;
L_101f914d: ;
    ecx = ebx * 5u;
    edx = ebx * 0xbu;
    ebp = ebx * 0x20u + self + 0x174u;
    edi = ebx * 0x16u + self + 0x6e8u;
L_101f9173: ;
    q2 = (int64_t)cow_muls(0x66666667u, ebx);
    t3 = (uint32_t)((int32_t)cow_qhi(q2) >> 2u);
    t4 = t3 + (t3 >> 0x1fu);
    if (rd8(edi) != 1u)
    {
        loc_4 = t4;
        goto L_101f91dc;
    }
    edx = t4;
    eax = edi - 0x10u;
    esi = arg3;
L_101f9195: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_101f91b9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_101f91b5;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101f91b9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_101f9195;
    }
L_101f91b5: ;
    eax = 0u;
L_101f91be: ;
    if (eax == 0u) goto L_101f9285;
    if ((int32_t)(ebx + 1u) < 40)
    {
        ebx = ebx + 1u;
        ebp = ebp + 0x20u;
        edi = edi + 0x16u;
        goto L_101f916f;
    }
    return;
L_101f9168: ;
    ebx = 0x19u;
    goto L_101f914d;
L_101f916f: ;
    goto L_101f9173;
L_101f91b9: ;
    eax = -cf + 1u - cf;
    goto L_101f91be;
L_101f91dc: ;
    wr32(edi - 0x10u, rd32(arg3));
    t5 = rd32(arg3 + 4u);
    wr32(edi - 0xcu, t5);
    t6 = rd32(arg3 + 8u);
    wr32(edi - 8u, t6);
    t7 = rd16(arg3 + 0xcu);
    wr16(edi - 4u, (uint16_t)t7);
    t8 = rd8(arg3 + 0xeu);
    wr8(edi - 1u, 0u);
    wr8(edi - 2u, (uint8_t)t8);
    wr16(edi - 0x14u, (uint16_t)arg1);
    wr16(edi - 0x12u, (uint16_t)arg2);
    wr8(edi, 1u);
    if ((uint8_t)arg4 == 0u)
    {
        eax = ((arg3 | t8) & 0xffff0000u) | (uint16_t)arg1;
        ecx = edi - 0x10u;
        edx = (edi - 0x10u & 0xffff0000u) | (uint16_t)arg2;
        wr8(self + 0x10fu, (uint8_t)(rd8(self + 0x10fu) + 1u));
        if (loc_4 != 3u)
        {
            ebx = 6u;
            edi = loc_4;
        }
        else
        {
            edi = loc_4;
            wr8(self + 0xa48u, 1u);
            ebx = 6u;
        }
    }
    else
    {
        eax = ((arg3 | t8) & 0xffff0000u) | (uint16_t)arg1;
        ecx = edi - 0x10u;
        edx = (edi - 0x10u & 0xffff0000u) | (uint16_t)arg2;
        wr8(self + 0x10eu, (uint8_t)(rd8(self + 0x10eu) + 1u));
        ebx = 5u;
    }
    wr8(ebp, rd8(ebp) | 0x88u);
    wr16(ebp + 6u, (uint16_t)eax);
    wr8(ebp + 2u, (uint8_t)ebx);
    wr16(ebp + 8u, (uint16_t)edx);
    wr16(ebp + 0xau, 0x10u);
    wr16(ebp + 0xcu, 1u);
    wr32(ebp + 0x18u, ecx);
    wr16(ebp + 0x10u, 2u);
    if ((int16_t)rd16(self + 0x106u) >= 2)
    {
        g->ebx = ebx;
        g->edi = edi;
        g->ebp = ebp;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x101fad70u), 2u, self, edx, 0, 1, 0u);
    }
L_101f9285: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9110(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
