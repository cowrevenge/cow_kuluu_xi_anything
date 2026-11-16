/* f_0x101486b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101486b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x30u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x34u, 2u);
        g->esp = sp0 - 0x30u;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        wr32(sp0 - 0x14u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t4;
        }
        else
        {
            eax = t4;
            edx = t4;
            loc_14 = t4;
            wr32(sp0 - 0x34u, in_ebx);
            wr32(sp0 - 0x38u, in_ebp);
            wr32(sp0 - 0x3cu, in_edi);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x1cu, 0x3c0u);
            wr32(sp0 - 0x28u, COW_IMG(0x104856e4u));
            ecx = 0x3c0u;
            ebx = (in_ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x13u);
            edi = in_edi;
            loc_2c = 0u;
            loc_1c = 0x3c0u;
            loc_28 = COW_IMG(0x104856e4u);
L_10148728: ;
            t5 = (edi & 0xffff0000u) | rd16(loc_28);
            if ((t5 & 0x8000u) == 0u)
            {
                eax = t5 & 0x8000u;
                edi = t5;
                goto L_10148747;
            }
            eax = t5 & 0x8000u;
            edi = t5;
            if ((edi & 0x7fffu) == 0u) goto L_101487d9;
L_10148747: ;
            wr32(sp0 - 0x40u, 0u);
            t6 = (-((uint16_t)eax != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
            wr32(sp0 - 0x18u, t6);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0x80808080u);
            wr32(sp0 - 0x4cu, (uint32_t)(int16_t)ebx);
            t7 = (uint32_t)(int16_t)rd16(sp0 + (uint32_t)(int16_t)(loc_2c & 1u) * 2u - 0x24u);
            wr32(sp0 - 0x50u, t7);
            g->edx = rd32(edx);
            t8 = rd32(ecx + rd32(edx));
            t9 = rd32(edx);
            g->esp = sp0 - 0x3cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t8, 5, t7, (uint32_t)(int16_t)ebx, 0x80808080u, 0u, 0u);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x40u, edi & 0x7fffu);
            wr32(sp0 - 0x44u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x48u, sp0 - 0x10u);
            g->ebx = ebx;
            g->esp = sp0 - 0x34u;
            t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), edi & 0x7fffu, in_edi, in_ebp);
            wr32(sp0 - 0x4cu, 0x3f800000u);
            wr32(sp0 - 0x50u, 0x3f800000u);
            wr32(sp0 - 0x54u, 1u);
            t13 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x58u, t13);
            wr32(sp0 - 0x5cu, sp0 - 0x10u);
            wr32(sp0 - 0x60u, ebx);
            t14 = (t12 & 0xffff0000u) | rd16(sp0 + (uint32_t)(int16_t)(loc_2c & 1u) * 2u - 0x20u);
            wr32(sp0 - 0x64u, t14);
            g->esp = sp0 - 0x48u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t14, ebx, sp0 - 0x10u, t13, 1u, 0x3f800000u, 0x3f800000u);
            if (!(loc_2c & 1u))
            {
                edi = edi & 0x7fffu;
            }
            else
            {
                edi = edi & 0x7fffu;
                ebx = ebx + 0xeu;
            }
            t15 = rd32(sp0 - 0x2cu) + 1u;
            wr32(sp0 - 0x2cu, t15);
            eax = t15;
            ecx = rd32(sp0 - 0x1cu);
            edx = rd32(sp0 - 0x14u);
            loc_2c = t15;
L_101487d9: ;
            wr32(sp0 - 0x1cu, ecx + 4u);
            wr32(sp0 - 0x28u, loc_28 + 2u);
            if ((int32_t)(ecx + 4u) < 1024)
            {
                loc_1c = ecx + 4u;
                ecx = ecx + 4u;
                loc_28 = loc_28 + 2u;
                goto L_10148728;
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101486b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101486b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
