/* f_0x103178f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103178f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
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
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10317908u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317908;
    case 0x10317911u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317911;
    case 0x10317918u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_10317918;
    case 0x1031791fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1031791f;
    case 0x10317927u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_10317927;
    case 0x1031792fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1031792f;
    case 0x10317931u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_10317931;
    case 0x10317936u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317936;
    case 0x1031793bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031793b;
    case 0x10317944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317944;
    case 0x1031794bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031794b;
    case 0x1031795au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031795a;
    case 0x1031796fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031796f;
    case 0x10317978u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317978;
    case 0x10317982u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317982;
    case 0x1031798cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x98u); goto E_1031798c;
    case 0x10317997u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317997;
    case 0x103179a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a3;
    case 0x103179a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a5;
    case 0x103179a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a7;
    case 0x103179b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179b4;
    case 0x103179bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179bd;
    case 0x103179cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179cb;
    case 0x103179ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179ce;
    case 0x103179d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179d7;
    case 0x103179deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179de;
    case 0x103179e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179e5;
    case 0x103179ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179eb;
    case 0x103179f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179f9;
    case 0x10317a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a05;
    case 0x10317a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a0d;
    case 0x10317a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a12;
    case 0x10317a18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a18;
    case 0x10317a26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a26;
    case 0x10317a3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a3d;
    case 0x10317a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a44;
    case 0x10317a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a47;
    case 0x10317a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a4e;
    case 0x10317a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a54;
    case 0x10317a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a5f;
    case 0x10317a6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a6b;
    case 0x10317a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a6d;
    case 0x10317a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a74;
    case 0x10317a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a7c;
    case 0x10317a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a80;
    case 0x10317a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a86;
    case 0x10317a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317a8d;
    case 0x10317a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a9d;
    case 0x10317aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317aa6;
    case 0x10317aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317aad;
    case 0x10317ab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317ab1;
    case 0x10317abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317abf;
    case 0x10317ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317ac5;
    case 0x10317ad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317ad2;
    case 0x10317ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317ad8;
    case 0x10317addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317add;
    case 0x10317ae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317ae0;
    case 0x10317aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317aec;
    case 0x10317af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317af3;
    case 0x10317af8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_10317af8;
    case 0x10317b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_10317b05;
    case 0x10317b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317b0e;
    case 0x10317b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); goto E_10317b16;
    case 0x10317b1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317b1b;
    case 0x10317b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); goto E_10317b1d;
    case 0x10317b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317b24;
    case 0x10317b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317b25;
    case 0x10317b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317b30;
    case 0x10317b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_4 = rd32(sp0 - 4u); goto E_10317b32;
    default: break;
    }
#endif

    COW_AT(103178f0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_10317b30;
    esi = rd32(sp0 + 4u);
    COW_AT(10317908)
    if ((int32_t)esi > 5) goto L_10317b30;
    COW_AT(10317911)
    wr32(sp0 - 0x98u, 0x13u);
    g->ebx = 0u;
    g->eax = in_eax;
    g->esp = sp0 - 0x8cu;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x13u, in_esi, in_ebx);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10317918)
    t3 = rd32(COW_IMG(0x109f840cu));
    wr32(COW_IMG(0x109f840cu), t3 + 1u);
    ecx = rd32(sp0 - 0x98u);
L_1031791f: ;
    COW_AT(1031791f)
    t4 = rd32(COW_IMG(0x109f8410u));
    if (t4 == 0u) goto L_10317931;
    COW_AT(10317927)
    wr32(sp0 - 0x98u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 1u);   /* kernel32.dll!Sleep */
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(1031792f)
    goto L_1031791f;
L_10317931: ;
    COW_AT(10317931)
    wr32(sp0 - 0x98u, in_edi);
    if (esi == 0u) goto L_1031795a;
    COW_AT(10317936)
    t8 = rd32(sp0 + 8u);
    if (t8 == 0u) goto L_1031794b;
    COW_AT(1031793b)
    t9 = rd32(sp0 + 8u);
    wr32(sp0 - 0x9cu, t9);
    wr32(sp0 - 0xa0u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t10 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, esi, t9, in_edi, rd32(sp0 - 0x94u));
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(10317944)
    ecx = rd32(sp0 - 0x9cu);
L_10317b1b: ;
    COW_AT(10317b1b)
    esi = eax;
    loc_98 = rd32(sp0 - 0x98u);
L_10317b1d: ;
    COW_AT(10317b1d)
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, loc_98, rd32(sp0 - 0x94u));
    COW_AT(10317b24)
L_10317b25: ;
    COW_AT(10317b25)
    t66 = rd32(COW_IMG(0x109f840cu));
    wr32(COW_IMG(0x109f840cu), t66 - 1u);
    eax = esi;
    edi = rd32(sp0 - 0x98u);
    loc_4 = rd32(sp0 - 4u);
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
L_10317b32: ;
    COW_AT(10317b32)
    g->ebx = loc_90;
    g->esi = loc_94;
    g->edi = edi;
    g->ebp = loc_4;
    return eax;
L_1031794b: ;
    COW_AT(1031794b)
    eax = esi * 3u;
    esi = rd32(COW_IMG(0x103d0734u) + esi * 0xcu);
    loc_98 = in_edi;
    goto L_10317b1d;
L_1031795a: ;
    COW_AT(1031795a)
    wr32(sp0 - 8u, 1u);
    t12 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, 0u);
    if (t12 == 0u)
    {
        loc_98 = in_edi;
        goto L_10317b16;
    }
    edi = t12;
    COW_AT(1031796f)
    t13 = rd8(edi);
    if ((uint8_t)t13 != 0x4cu) goto L_10317a8d;
    COW_AT(10317978)
    t14 = rd8(edi + 1u);
    if ((uint8_t)t14 != 0x43u) goto L_10317a8d;
    COW_AT(10317982)
    t15 = rd8(edi + 2u);
    if ((uint8_t)t15 != 0x5fu) goto L_10317a8d;
    COW_AT(1031798c)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), in_edi, rd32(sp0 - 0x94u));
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(10317997)
    if (eax == 0u)
    {
        ecx = rd32(sp0 - 0x9cu);
        goto L_10317a6d;
    }
    ecx = rd32(sp0 - 0x9cu);
    esi = eax;
    COW_AT(103179a3)
L_103179a7: ;
    COW_AT(103179a7)
    wr32(sp0 - 8u, esi - edi);
    if (esi == edi)
    {
        eax = esi - edi;
        goto L_10317a6d;
    }
    eax = esi - edi;
    loc_8 = esi - edi;
    COW_AT(103179b4)
    t18 = rd8(esi);
    if ((uint8_t)t18 == 0x3bu) goto L_10317a6d;
    COW_AT(103179bd)
    wr32(sp0 + 8u, 1u);
    ebx = COW_IMG(0x103d073cu);
L_103179ce: ;
    COW_AT(103179ce)
    wr32(sp0 - 0x9cu, eax);
    wr32(sp0 - 0xa0u, edi);
    wr32(sp0 - 0xa4u, rd32(ebx));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t19 = cow_cdecl(g, COW_IMG(0x10312980u), 5, rd32(ebx), edi, eax, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(103179d7)
    if (eax != 0u) goto L_103179eb;
    COW_AT(103179de)
    wr32(sp0 - 0x9cu, rd32(ebx));
    g->edx = edx;
    t22 = rd32(ebx);
    g->esp = sp0 - 0x98u;
    t23 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t22);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(103179e5)
    t25 = rd32(sp0 - 8u);
    if (t25 == eax)
    {
        ecx = rd32(sp0 - 0x9cu);
        goto L_103179f9;
    }
    ecx = rd32(sp0 - 0x9cu);
L_103179eb: ;
    COW_AT(103179eb)
    t26 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t26 + 1u);
    if ((int32_t)(ebx + 0xcu) <= (int32_t)COW_IMG(0x103d076cu))
    {
        ebx = ebx + 0xcu;
        goto L_103179cb;
    }
L_103179f9: ;
    COW_AT(103179f9)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b4u));
    wr32(sp0 - 0xa0u, esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x10322bb0u), ecx, 4, esi + 1u, COW_IMG(0x1034a2b4u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t28 = g->edx;
    eax = t27;
    edx = t28;
    esi = esi + 1u;
    COW_AT(10317a05)
    if (eax != 0u)
    {
        ecx = rd32(sp0 - 0x9cu);
        edi = eax;
        goto L_10317a12;
    }
    ecx = rd32(sp0 - 0x9cu);
    edi = eax;
    COW_AT(10317a0d)
    t29 = rd8(esi);
    if ((uint8_t)t29 != 0x3bu) goto L_10317a6d;
L_10317a12: ;
    COW_AT(10317a12)
    t30 = rd32(sp0 + 8u);
    if ((int32_t)t30 <= 5)
    {
    COW_AT(10317a18)
        wr32(sp0 - 0x9cu, edi);
        wr32(sp0 - 0xa0u, esi);
        wr32(sp0 - 0xa4u, sp0 - 0x8cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x8cu, g->ecx, g->edx, 1, 3, sp0 - 0x8cu, esi, edi);
        t31 = g->ecx;
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    COW_AT(10317a26)
        t33 = rd8(edi + sp0 - 0x8cu);
        wr8(edi + sp0 - 0x8cu, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        t34 = rd32(sp0 + 8u);
        wr32(sp0 - 0xacu, t34);
        g->eax = sp0 - 0x8cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        t35 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, t34, sp0 - 0x8cu, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(10317a3d)
        if (eax != 0u)
        {
    COW_AT(10317a44)
            t38 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t38 + 1u);
        }
    }
    COW_AT(10317a47)
    t39 = rd8(edi + esi);
    if ((uint8_t)t39 == 0u) goto L_10317a7c;
    edi = edi + esi;
    COW_AT(10317a4e)
    t40 = rd8(edi + 1u);
    if ((uint8_t)t40 == 0u) goto L_10317a7c;
    edi = edi + 1u;
    COW_AT(10317a54)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(10317a5f)
    if (eax != 0u)
    {
        ecx = rd32(sp0 - 0x9cu);
        esi = eax;
        goto L_103179a5;
    }
    ecx = rd32(sp0 - 0x9cu);
    COW_AT(10317a6b)
L_10317a6d: ;
    COW_AT(10317a6d)
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    COW_AT(10317a74)
    esi = 0u;
    goto L_10317b25;
L_103179a5: ;
    COW_AT(103179a5)
    goto L_103179a7;
L_103179cb: ;
    COW_AT(103179cb)
    eax = rd32(sp0 - 8u);
    loc_8 = rd32(sp0 - 8u);
    goto L_103179ce;
L_10317a7c: ;
    COW_AT(10317a7c)
    t43 = rd32(sp0 + 4u);
    zf = t43 == 0u;
L_10317a80: ;
    COW_AT(10317a80)
    if (!zf)
    {
        loc_98 = rd32(sp0 - 0x98u);
        goto L_10317b16;
    }
    COW_AT(10317a86)
    esi = 0u;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317a8d: ;
    COW_AT(10317a8d)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x8cu);
    wr32(sp0 - 0xacu, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t44 = cow_call_regs(g, COW_IMG(0x10317d0au), sp0 - 0x8cu, g->ecx, g->edx, 1, 4, edi, sp0 - 0x8cu, 0u, 0u);
    t45 = g->ecx;
    t46 = g->edx;
    eax = t44;
    ecx = t45;
    edx = t46;
    COW_AT(10317a9d)
    if (eax == 0u)
    {
        esi = eax;
        loc_98 = rd32(sp0 - 0x98u);
        goto L_10317b1d;
    }
    COW_AT(10317aa6)
    ebx = 0u;
    edi = COW_IMG(0x103d0734u);
    loc_8 = rd32(sp0 - 8u);
L_10317aad: ;
    COW_AT(10317aad)
    if (edi != COW_IMG(0x103d0734u))
    {
    COW_AT(10317ab1)
        wr32(sp0 - 0x9cu, rd32(edi));
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->edi = edi;
        g->edx = edx;
        t47 = rd32(edi);
        g->esp = sp0 - 0x98u;
        t48 = cow_call_regs(g, COW_IMG(0x10320960u), sp0 - 0x8cu, g->ecx, g->edx, 1, 2, sp0 - 0x8cu, t47);
        t49 = g->edx;
        t50 = g->edi;
        eax = t48;
        edx = t49;
        edi = t50;
    COW_AT(10317abf)
        if (eax == 0u)
        {
            ecx = rd32(sp0 - 0x9cu);
            goto L_10317add;
        }
        ecx = rd32(sp0 - 0x9cu);
    COW_AT(10317ac5)
        wr32(sp0 - 0x9cu, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, ebx);
        g->eax = sp0 - 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t51 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, ebx, sp0 - 0x8cu, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t52 = g->edx;
        eax = t51;
        edx = t52;
    COW_AT(10317ad2)
        if (eax != 0u)
        {
            ecx = rd32(sp0 - 0x9cu);
            goto L_10317add;
        }
        ecx = rd32(sp0 - 0x9cu);
    COW_AT(10317ad8)
        t53 = rd32(sp0 - 8u);
        wr32(sp0 - 8u, t53 & eax);
        loc_8 = t53 & eax;
    }
L_10317ae0: ;
    COW_AT(10317ae0)
    if ((int32_t)(edi + 0xcu) <= (int32_t)COW_IMG(0x103d0770u))
    {
        ebx = ebx + 1u;
        edi = edi + 0xcu;
        goto L_10317aad;
    }
    ebx = ebx + 1u;
    COW_AT(10317aec)
    if (loc_8 == 0u) goto L_10317b0e;
    COW_AT(10317af3)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t55 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(10317af8)
    wr32(sp0 - 0x9cu, rd32(COW_IMG(0x103d0734u)));
    g->ebx = ebx;
    g->eax = eax;
    t58 = rd32(COW_IMG(0x103d0734u));
    g->esp = sp0 - 0x90u;
    t59 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t58, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t60 = g->edx;
    edx = t60;
    esi = eax;
    eax = t59;
    COW_AT(10317b05)
    t61 = rd32(sp0 - 0x9cu);
    wr32(COW_IMG(0x103d0734u), 0u);
    ecx = t61;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317add: ;
    COW_AT(10317add)
    t54 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t54 + 1u);
    loc_8 = rd32(sp0 - 8u);
    goto L_10317ae0;
L_10317b0e: ;
    COW_AT(10317b0e)
    t62 = rd32(sp0 + 4u);
    zf = t62 == 0u;
    goto L_10317a80;
L_10317b16: ;
    COW_AT(10317b16)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t63 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
    goto L_10317b1b;
L_10317b30: ;
    COW_AT(10317b30)
    eax = 0u;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_90 = in_ebx;
    loc_94 = in_esi;
    goto L_10317b32;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103178f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10317908u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317911u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317918u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031791fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317927u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031792fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317931u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317936u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031793bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317944u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031794bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031795au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031796fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317982u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1031798cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317997u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x9cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a12u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a74u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x9cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317a9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317aa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317aadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317ab1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317abfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317ac5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317ad2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317ad8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317addu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317ae0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        (void)sp0;
        return 1;
    }
    case 0x10317aecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317af3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10317af8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10317b05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x9cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10317b0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10317b16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x9cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103178f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103178f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
