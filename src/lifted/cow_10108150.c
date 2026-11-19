/* f_0x10108150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10108150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10108167u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); goto E_10108167;
    case 0x10108176u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_10108176;
    case 0x10108184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_10108184;
    case 0x1010819eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_1010819e;
    case 0x101081a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_101081a0;
    case 0x101081a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_101081a4;
    case 0x101081b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_101081b6;
    case 0x101081bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_101081bf;
    case 0x101081dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101081df;
    case 0x101081e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101081e1;
    case 0x101081f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101081f8;
    case 0x1010821du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010821d;
    case 0x10108223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10108223;
    case 0x1010822cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010822c;
    case 0x1010822eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010822e;
    case 0x10108234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10108234;
    case 0x10108235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10108235;
    case 0x1010824au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010824a;
    case 0x10108258u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_10108258;
    case 0x10108272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_10108272;
    case 0x10108276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_10108276;
    case 0x1010827eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010827e;
    case 0x1010828cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_1010828c;
    case 0x10108294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_10108294;
    case 0x1010829cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_1010829c;
    case 0x1010829eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010829e;
    case 0x101082a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); goto E_101082a0;
    case 0x101082a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101082a5;
    case 0x101082b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_101082b4;
    case 0x101082d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_101082d3;
    case 0x101082d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_101082d6;
    case 0x101082e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101082e1;
    default: break;
    }
#endif

    COW_AT(10108150)
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x44u, 0u);
    if (rd16(COW_IMG(0x104e0afcu)) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_58 = in_ebp;
    }
    else
    {
    COW_AT(10108167)
        wr32(sp0 - 0x5cu, in_ebx);
        wr32(sp0 - 0x60u, in_esi);
        wr32(sp0 - 0x64u, in_edi);
        t1 = rd32(COW_IMG(0x104e0b00u)) + 4u;
        wr32(sp0 - 0x40u, t1);
        ecx = self;
        edx = in_edx;
        ebx = t1;
        loc_58 = in_ebp;
        loc_44 = 0u;
        loc_5c = in_ebx;
        loc_60 = in_esi;
        loc_64 = in_edi;
        loc_40 = t1;
L_10108176: ;
    COW_AT(10108176)
        wr32(sp0 - 0x4cu, rd32(ebx));
        if (rd32(ebx) == 0u) goto L_101082b4;
        eax = rd32(ebx);
        loc_4c = rd32(ebx);
L_10108184: ;
    COW_AT(10108184)
        t2 = rd32(loc_4c + 4u);
        wr32(sp0 - 0x34u, t2);
        wr32(sp0 - 0x54u, loc_4c + 0x14u);
        if (loc_4c + 0x14u == 0u)
        {
            ecx = loc_4c + 0x14u;
            esi = loc_4c;
            edi = t2;
        }
        else
        {
            ecx = loc_4c + 0x14u;
            esi = loc_4c;
            loc_34 = t2;
            loc_54 = loc_4c + 0x14u;
    COW_AT(1010819e)
L_101081a4: ;
    COW_AT(101081a4)
            if (rd32(ecx) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
                edx = rd32(ecx);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
                edx = rd32(ecx);
    COW_AT(101081b6)
                if ((uint16_t)eax != 0u)
                {
    COW_AT(101081bf)
                    wr32(sp0 - 0x50u, 0u);
                    wr32(sp0 - 0x3cu, (uint16_t)eax);
                    t3 = (uint16_t)(((eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 1u) >> 3u) + 1u);
                    wr32(sp0 - 0x48u, t3);
                    loc_50 = 0u;
                    loc_3c = (uint16_t)eax;
                    loc_48 = t3;
L_101081df: ;
    COW_AT(101081df)
                    ebp = 0u;
L_101081e1: ;
    COW_AT(101081e1)
                    if ((int32_t)(loc_50 + (uint16_t)ebp) >= (int32_t)loc_3c) goto L_10108258;
                    eax = loc_50 + (uint16_t)ebp;
                    edx = loc_3c;
                    esi = (uint16_t)ebp;
    COW_AT(101081f8)
                    t4 = rd8(eax + ecx + 8u);
                    wr8(sp0 - 0x38u, (uint8_t)t4);
                    t5 = (uint8_t)rd32(sp0 - 0x38u);
                    wr32(sp0 - 0x68u, t5);
                    wr32(sp0 - 0x6cu, COW_IMG(0x1036be9cu));
                    t6 = esi * 3u + sp0 - 0x20u;
                    wr32(sp0 - 0x70u, t6);
                    g->ebx = (ebx & 0xffffff00u) | t4;
                    g->eax = esi + sp0 - 0x20u;
                    g->ecx = t6;
                    g->edx = edx;
                    g->esp = sp0 - 0x5cu;
                    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t6, COW_IMG(0x1036be9cu), t5, loc_64, loc_60);
                    t8 = g->ecx;
                    t9 = g->edx;
                    eax = t7;
                    ecx = t8;
                    edx = t9;
                    ebx = (ebx & 0xffffff00u) | t4;
                    edi = t5;
    COW_AT(1010821d)
                    wr32(sp0 - 0x74u, edi);
                    g->eax = eax;
                    g->esp = sp0 - 0x70u;
                    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1031486fu), ecx, 1, edi);
                    t11 = g->ecx;
                    eax = t10;
                    ecx = t11;
    COW_AT(10108223)
                    if (eax != 0u)
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)ebx;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)ebx;
    COW_AT(1010822c)
                        eax = (eax & 0xffffff00u) | 0x2eu;
                    }
    COW_AT(1010822e)
                    if ((uint16_t)ebp >= 4u)
                    {
    COW_AT(10108234)
                        esi = esi + 1u;
                    }
    COW_AT(10108235)
                    wr32(sp0 - 0x68u, (uint8_t)eax);
                    wr32(sp0 - 0x6cu, COW_IMG(0x1036be98u));
                    t12 = esi + sp0 - 0x30u;
                    wr32(sp0 - 0x70u, t12);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x5cu;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, t12, COW_IMG(0x1036be98u), (uint8_t)eax, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    COW_AT(1010824a)
                    if ((uint16_t)(ebp + 1u) < 8u)
                    {
                        ecx = rd32(sp0 - 0x54u);
                        ebp = ebp + 1u;
                        loc_58 = rd32(sp0 - 0x58u);
                        loc_44 = rd32(sp0 - 0x44u);
                        loc_5c = rd32(sp0 - 0x5cu);
                        loc_60 = rd32(sp0 - 0x60u);
                        loc_64 = rd32(sp0 - 0x64u);
                        loc_40 = rd32(sp0 - 0x40u);
                        loc_4c = rd32(sp0 - 0x4cu);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_54 = rd32(sp0 - 0x54u);
                        loc_50 = rd32(sp0 - 0x50u);
                        loc_3c = rd32(sp0 - 0x3cu);
                        loc_48 = rd32(sp0 - 0x48u);
                        goto L_101081e1;
                    }
                    ecx = rd32(sp0 - 0x54u);
                    loc_58 = rd32(sp0 - 0x58u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_5c = rd32(sp0 - 0x5cu);
                    loc_60 = rd32(sp0 - 0x60u);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_4c = rd32(sp0 - 0x4cu);
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_54 = rd32(sp0 - 0x54u);
                    loc_50 = rd32(sp0 - 0x50u);
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_48 = rd32(sp0 - 0x48u);
L_10108258: ;
    COW_AT(10108258)
                    wr32(sp0 - 0x50u, loc_50 + 8u);
                    wr32(sp0 - 0x48u, loc_48 - 1u);
                    if (loc_48 != 1u)
                    {
                        loc_50 = loc_50 + 8u;
                        loc_48 = loc_48 - 1u;
                        goto L_101081df;
                    }
                    eax = loc_48 - 1u;
                    edx = loc_50 + 8u;
    COW_AT(10108272)
                    esi = loc_4c;
                }
            }
    COW_AT(10108276)
            wr32(sp0 - 0x68u, ecx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            t13 = cow_thiscall(g, COW_IMG(0x10108870u), esi, 1, ecx);
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
    COW_AT(1010827e)
            wr32(sp0 - 0x54u, eax);
            if (eax != 0u)
            {
                loc_54 = eax;
                goto L_101081a0;
            }
    COW_AT(1010828c)
            ebx = rd32(sp0 - 0x40u);
            edi = rd32(sp0 - 0x34u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_40 = rd32(sp0 - 0x40u);
        }
    COW_AT(10108294)
        wr32(sp0 - 0x68u, esi);
        if (rd32(ebx + 8u) == 0u)
        {
            eax = rd32(ebx + 8u);
            loc_68 = esi;
    COW_AT(101082a0)
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x5cu;
            t19 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, loc_68, loc_64, loc_60);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
        else
        {
            eax = rd32(ebx + 8u);
    COW_AT(1010829c)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            t16 = cow_thiscall(g, eax, ecx, 0);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(1010829e)
        }
    COW_AT(101082a5)
        wr32(sp0 - 0x4cu, edi);
        if (edi != 0u)
        {
            loc_58 = rd32(sp0 - 0x58u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_4c = edi;
            goto L_10108184;
        }
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_64 = rd32(sp0 - 0x64u);
L_101082b4: ;
    COW_AT(101082b4)
        wr32(ebx, 0u);
        wr32(sp0 - 0x44u, loc_44 + 1u);
        wr32(sp0 - 0x40u, ebx + 0x14u);
        if ((uint16_t)(loc_44 + 1u) < rd16(COW_IMG(0x104e0afcu)))
        {
            loc_44 = loc_44 + 1u;
            loc_40 = ebx + 0x14u;
            ebx = ebx + 0x14u;
            goto L_10108176;
        }
    COW_AT(101082d3)
        ebx = loc_5c;
        esi = loc_60;
        edi = loc_64;
    }
    COW_AT(101082d6)
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x104e0b00u)));
    g->esp = sp0 - 0x58u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, rd32(COW_IMG(0x104e0b00u)));
    COW_AT(101082e1)
    wr16(COW_IMG(0x104e0afcu), 0u);
    wr32(COW_IMG(0x104e0b00u), 0u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x58u);
    return;
L_101081a0: ;
    COW_AT(101081a0)
    ecx = loc_54;
    loc_58 = rd32(sp0 - 0x58u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
    loc_64 = rd32(sp0 - 0x64u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_34 = rd32(sp0 - 0x34u);
    goto L_101081a4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10108150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10108167u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10108176u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10108184u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010819eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101081a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101081a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101081b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101081bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101081dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101081e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101081f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1010821du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10108223u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1010822cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1010822eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10108234u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10108235u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1010824au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10108258u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10108272u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10108276u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1010827eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1010828cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10108294u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010829cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x68u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010829eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x68u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101082e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10108150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10108150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
