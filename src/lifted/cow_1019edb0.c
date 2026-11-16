/* f_0x1019edb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1019edb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x44u, t1);
    t2 = rd8(rd32(sp0 + 0xcu));
    wr32(sp0 + 0xcu, 0u);
    if ((uint8_t)t2 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_44 = t1;
    }
    else
    {
        loc_44 = t1;
        wr32(sp0 - 0x50u, in_ebx);
        wr32(sp0 - 0x54u, in_ebp);
        eax = 0u;
        edi = 0u;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_50 = in_ebx;
        loc_54 = in_ebp;
L_1019eddb: ;
        if ((int32_t)rd32(sp0 + 0xcu) >= (int32_t)arg5) goto L_1019ef3e;
        ecx = rd32(sp0 + 0xcu);
        if (rd8(loc_44) != 0xdu)
        {
            ecx = (ecx & 0xffffff00u) | rd8(loc_44);
            goto L_1019eeba;
        }
        ecx = (ecx & 0xffffff00u) | rd8(loc_44);
        edx = loc_44;
        t3 = rd8(edx + 1u);
        wr8(eax + sp0 - 0x40u, 0u);
        wr32(sp0 - 0x58u, arg4);
        if ((uint8_t)t3 != 0xau)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x40u);
            ecx = rd32(self + 0x4cu);
            goto L_1019ee7b;
        }
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x40u);
        ecx = rd32(self + 0x4cu);
        if ((uint8_t)eax != 9u)
        {
            eax = rd32(self + 0x50u);
            wr32(sp0 - 0x5cu, sp0 - 0x40u);
            wr32(sp0 - 0x60u, eax);
            wr32(sp0 - 0x64u, ecx);
            wr32(sp0 - 0x68u, edi);
            g->esp = sp0 - 0x64u;
            t7 = cow_call_regs(g, COW_IMG(0x1019ed50u), eax, self, g->edx, 0, 1, edi);
            wr32(sp0 - 0x68u, arg2 + t7);
            wr32(sp0 - 0x6cu, arg1);
            g->esp = sp0 - 0x54u;
            cow_fastcall(g, COW_IMG(0x1019e290u), self + 4u, arg1, 6, arg1, arg2 + t7, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x40u, arg4);
        }
        else
        {
            eax = rd32(self + 0x50u);
            wr32(sp0 - 0x5cu, sp0 - 0x3fu);
            wr32(sp0 - 0x60u, eax);
            wr32(sp0 - 0x64u, ecx);
            wr32(sp0 - 0x68u, edi);
            g->edx = sp0 - 0x3fu;
            g->esp = sp0 - 0x64u;
            t4 = cow_call_regs(g, COW_IMG(0x1019ed50u), eax, self, g->edx, 0, 1, edi);
            t5 = g->edx;
            wr32(sp0 - 0x68u, arg2 + t4);
            g->esp = sp0 - 0x68u;
            t6 = cow_call_regs(g, COW_IMG(0x1019ed30u), arg2 + t4, self, g->edx, 1, 0);
            wr32(sp0 - 0x6cu, arg1 + t6);
            g->esp = sp0 - 0x54u;
            cow_fastcall(g, COW_IMG(0x1019e550u), self + 4u, arg1, 6, arg1 + t6, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x3fu, arg4);
        }
        t8 = rd32(sp0 + 0xcu) + 1u;
        t9 = rd32(sp0 - 0x44u);
        wr32(sp0 + 0xcu, t8);
        wr32(sp0 - 0x44u, t9 + 1u);
        eax = 0u;
        edi = edi + 0xeu;
        loc_44 = t9 + 1u;
L_1019ef2c: ;
        wr32(sp0 - 0x44u, loc_44 + 1u);
        if (rd8(loc_44 + 1u) != 0u)
        {
            loc_44 = loc_44 + 1u;
            goto L_1019eddb;
        }
        loc_44 = loc_44 + 1u;
L_1019ef3e: ;
        ebx = loc_50;
        ebp = loc_54;
    }
    g->ebx = ebx;
    g->esi = loc_48;
    g->edi = loc_4c;
    g->ebp = ebp;
    return (loc_44 != 0u) * 2u - 1u;
L_1019ee7b: ;
    if ((uint8_t)eax != 9u)
    {
        eax = rd32(self + 0x50u);
        goto L_1019ee8b;
    }
    eax = rd32(self + 0x50u);
    wr32(sp0 - 0x5cu, sp0 - 0x3fu);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, ecx);
    edx = sp0 - 0x3fu;
    loc_60 = eax;
    loc_64 = ecx;
L_1019eeda: ;
    wr32(sp0 - 0x68u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t13 = cow_call_regs(g, COW_IMG(0x1019ed50u), eax, self, g->edx, 0, 1, edi);
    t14 = g->edx;
    wr32(sp0 - 0x68u, arg2 + t13);
    g->esp = sp0 - 0x68u;
    t15 = cow_call_regs(g, COW_IMG(0x1019ed30u), arg2 + t13, self, g->edx, 1, 0);
    wr32(sp0 - 0x6cu, arg1 + t15);
    g->esp = sp0 - 0x54u;
    cow_fastcall(g, COW_IMG(0x1019e550u), self + 4u, arg1, 6, arg1 + t15, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x3fu, arg4);
    t16 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 + 0xcu, t16);
    eax = 0u;
    edi = edi + 0xeu;
    goto L_1019ef2c;
L_1019ee8b: ;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, ecx);
    wr32(sp0 - 0x68u, edi);
    g->esp = sp0 - 0x64u;
    t10 = cow_call_regs(g, COW_IMG(0x1019ed50u), eax, self, g->edx, 0, 1, edi);
    wr32(sp0 - 0x68u, arg2 + t10);
    wr32(sp0 - 0x6cu, arg1);
    eax = arg2 + t10;
    edx = arg1;
    loc_68 = arg2 + t10;
L_1019eea2: ;
    g->esp = sp0 - 0x54u;
    cow_fastcall(g, COW_IMG(0x1019e290u), self + 4u, edx, 6, arg1, loc_68, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x40u, rd32(sp0 - 0x58u));
    t19 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 + 0xcu, t19);
    eax = 0u;
    edi = edi + 0xeu;
    goto L_1019ef2c;
L_1019eeba: ;
    if ((uint8_t)ecx != 0xau) goto L_1019ef27;
    t11 = rd32(self + 0x50u);
    t12 = rd32(self + 0x4cu);
    wr8(eax + sp0 - 0x40u, 0u);
    wr32(sp0 - 0x58u, arg4);
    if (rd8(sp0 - 0x40u) != 9u)
    {
        ecx = t11;
        edx = t12;
        goto L_1019ef0b;
    }
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x5cu, sp0 - 0x3fu);
    wr32(sp0 - 0x60u, ecx);
    wr32(sp0 - 0x64u, edx);
    eax = sp0 - 0x3fu;
    loc_60 = ecx;
    loc_64 = edx;
    goto L_1019eeda;
L_1019ef0b: ;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, ecx);
    wr32(sp0 - 0x64u, edx);
    wr32(sp0 - 0x68u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t17 = cow_call_regs(g, COW_IMG(0x1019ed50u), sp0 - 0x40u, self, g->edx, 0, 1, edi);
    t18 = g->edx;
    wr32(sp0 - 0x68u, arg2 + t17);
    wr32(sp0 - 0x6cu, arg1);
    eax = arg1;
    edx = t18;
    loc_68 = arg2 + t17;
    goto L_1019eea2;
L_1019ef27: ;
    wr8(eax + sp0 - 0x40u, (uint8_t)ecx);
    eax = eax + 1u;
    goto L_1019ef2c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019edb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019edb0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
