/* f_0x102daa91 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102daa91 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102daa91(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    if (param_2 == 0) {
        g->eax = (CowU32)(0); return;
      }
      if (param_3 == 0) {
        g->eax = (CowU32)(0); return;
      }
      if ((int)param_1 < -0x7789f799) {
        if (param_1 == (CowU32)0x88760866) {
          param_1 = "D3DERR_NOTFOUND";
        }
        else if ((int)param_1 < -0x7789f7e3) {
          if (param_1 == (CowU32)0x8876081c) {
            param_1 = "D3DERR_UNSUPPORTEDALPHAARG";
          }
          else if ((int)param_1 < -0x7789f7e7) {
            if (param_1 == (CowU32)0x88760818) {
              param_1 = "D3DERR_WRONGTEXTUREFORMAT";
            }
            else if (param_1 == (CowU32)0x80004001) {
              param_1 = "E_NOTIMPL";
            }
            else if (param_1 == (CowU32)0x80004005) {
              param_1 = "E_FAIL";
            }
            else if (param_1 == (CowU32)0x8007000e) {
              param_1 = "E_OUTOFMEMORY";
            }
            else {
              if (param_1 != (CowU32)0x8876017c) goto L_102dacdc;
              param_1 = "D3DERR_OUTOFVIDEOMEMORY";
            }
          }
          else if (param_1 == (CowU32)0x88760819) {
            param_1 = "D3DERR_UNSUPPORTEDCOLOROPERATION";
          }
          else if (param_1 == (CowU32)0x8876081a) {
            param_1 = "D3DERR_UNSUPPORTEDCOLORARG";
          }
          else {
            if (param_1 != (CowU32)0x8876081b) {
    L_102dacdc:
              pcVar2 = "Unrecognized error: 0x%0.8x";
              goto L_102dace2;
            }
            param_1 = "D3DERR_UNSUPPORTEDALPHAOPERATION";
          }
        }
        else if (param_1 == (CowU32)0x8876081d) {
          param_1 = "D3DERR_TOOMANYOPERATIONS";
        }
        else if (param_1 == (CowU32)0x8876081e) {
          param_1 = "D3DERR_CONFLICTINGTEXTUREFILTER";
        }
        else if (param_1 == (CowU32)0x8876081f) {
          param_1 = "D3DERR_UNSUPPORTEDFACTORVALUE";
        }
        else if (param_1 == (CowU32)0x88760821) {
          param_1 = "D3DERR_CONFLICTINGRENDERSTATE";
        }
        else if (param_1 == (CowU32)0x88760822) {
          param_1 = "D3DERR_UNSUPPORTEDTEXTUREFILTER";
        }
        else if (param_1 == (CowU32)0x88760826) {
          param_1 = "D3DERR_CONFLICTINGTEXTUREPALETTE";
        }
        else {
          if (param_1 != (CowU32)0x88760827) goto L_102dacdc;
          param_1 = "D3DERR_DRIVERINTERNALERROR";
        }
      }
      else if ((int)param_1 < -0x7789f4ab) {
        if (param_1 == (CowU32)0x88760b54) {
          param_1 = "D3DXERR_CANNOTMODIFYINDEXBUFFER";
        }
        else if (param_1 == (CowU32)0x88760867) {
          param_1 = "D3DERR_MOREDATA";
        }
        else if (param_1 == (CowU32)0x88760868) {
          param_1 = "D3DERR_DEVICELOST";
        }
        else if (param_1 == (CowU32)0x88760869) {
          param_1 = "D3DERR_DEVICENOTRESET";
        }
        else if (param_1 == (CowU32)0x8876086a) {
          param_1 = "D3DERR_NOTAVAILABLE";
        }
        else if (param_1 == (CowU32)0x8876086b) {
          param_1 = "D3DERR_INVALIDDEVICE";
        }
        else if (param_1 == (CowU32)0x8876086c) {
          param_1 = "D3DERR_INVALIDCALL";
        }
        else {
          if (param_1 != (CowU32)0x8876086d) goto L_102dacdc;
          param_1 = "D3DERR_DRIVERINVALIDCALL";
        }
      }
      else if (param_1 == (CowU32)0x88760b55) {
        param_1 = "D3DXERR_INVALIDMESH";
      }
      else if (param_1 == (CowU32)0x88760b56) {
        param_1 = "D3DXERR_CANNOTATTRSORT";
      }
      else if (param_1 == (CowU32)0x88760b57) {
        param_1 = "D3DXERR_SKINNINGNOTSUPPORTED";
      }
      else if (param_1 == (CowU32)0x88760b58) {
        param_1 = "D3DXERR_TOOMANYINFLUENCES";
      }
      else if (param_1 == (CowU32)0x88760b59) {
        param_1 = "D3DXERR_INVALIDDATA";
      }
      else if (param_1 == (CowU32)0x88760b5a) {
        param_1 = "D3DXERR_LOADEDMESHASNODATA";
      }
      else {
        if (param_1 != (CowU32)0x0) goto L_102dacdc;
        param_1 = "S_OK";
      }
      pcVar2 = "%s";
    L_102dace2:
      iVar1 = cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_102DACE9), 4u, (const CowU32[]){ param_2, param_3, pcVar2, param_1 }, g->ecx, g->edx, g->eax, 16u);
      if ((iVar1 < 0) && (param_3 != 0)) {
        wr8((uint32_t)(param_2 + -1 + param_3), 0);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102daa91(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102daa91: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102daa92: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102daa93: register edi, replayed as the entry ran it */
    cow_lift_102daa91(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
